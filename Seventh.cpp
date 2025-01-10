#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <limits>

using namespace std;

struct Point {
    int x, y;
};

struct Bubble {
    Point center;
    int radius;
};

bool doBubblesOverlap(const Bubble& b1, const Bubble& b2) {
    int distSq = (b1.center.x - b2.center.x) * (b1.center.x - b2.center.x) +
                 (b1.center.y - b2.center.y) * (b1.center.y - b2.center.y);
    int radSumSq = (b1.radius + b2.radius) * (b1.radius + b2.radius);
    return distSq < radSumSq;
}

int main() {
    int S;
    cin >> S;

    Bubble vehicle;
    cin >> vehicle.center.x >> vehicle.center.y >> vehicle.radius;

    Point destination;
    cin >> destination.x >> destination.y;

    int N;
    cin >> N;
    vector<Bubble> buildings(N);
    for (int i = 0; i < N; ++i) {
        cin >> buildings[i].center.x >> buildings[i].center.y >> buildings[i].radius;
    }

    int T;
    cin >> T;
    vector<pair<int, int>> taxLines(T);
    for (int i = 0; i < T; ++i) {
        cin >> taxLines[i].first >> taxLines[i].second;
        taxLines[i].first--; // Convert to 0-based index
        taxLines[i].second--; // Convert to 0-based index
    }

    // BFS to find the shortest path and count tax lines crossed
    queue<pair<Point, int>> q;
    q.push({vehicle.center, 0});

    // Track visited points to avoid reprocessing
    vector<vector<bool>> visited(S + 1, vector<bool>(S + 1, false));
    visited[vehicle.center.x][vehicle.center.y] = true;

    while (!q.empty()) {
        auto [cur, taxCount] = q.front();
        q.pop();

        // Check if we reached the destination
        if (cur.x == destination.x && cur.y == destination.y) {
            cout << taxCount << endl;
            return 0;
        }

        // Move to adjacent points and check for constraints
        vector<Point> adjPoints = {{cur.x + 1, cur.y}, {cur.x - 1, cur.y}, {cur.x, cur.y + 1}, {cur.x, cur.y - 1}};
        for (const auto& next : adjPoints) {
            if (next.x < 0 || next.x > S || next.y < 0 || next.y > S || visited[next.x][next.y]) {
                continue;
            }

            bool valid = true;
            for (const auto& building : buildings) {
                if (doBubblesOverlap({next, vehicle.radius}, building)) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                // Count tax lines crossed
                int newTaxCount = taxCount;
                for (const auto& line : taxLines) {
                    const auto& b1 = buildings[line.first];
                    const auto& b2 = buildings[line.second];
                    if ((doBubblesOverlap({cur, vehicle.radius}, b1) && doBubblesOverlap({next, vehicle.radius}, b2)) ||
                        (doBubblesOverlap({cur, vehicle.radius}, b2) && doBubblesOverlap({next, vehicle.radius}, b1))) {
                        newTaxCount++;
                    }
                }

                q.push({next, newTaxCount});
                visited[next.x][next.y] = true;
            }
        }
    }

    cout << "Impossible" << endl;
    return 0;
}

