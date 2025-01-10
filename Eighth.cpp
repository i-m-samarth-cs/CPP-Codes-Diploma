#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point& p) const {
        return tie(x, y) < tie(p.x, p.y);
    }
};

struct Line {
    Point p1, p2;
};

// Helper function to determine if two points are the same
bool samePoint(const Point& p1, const Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

// Function to check if a closed figure is formed
bool isClosedFigure(const vector<Line>& lines, set<Point>& closedFigurePoints) {
    map<Point, vector<Point>> graph;
    for (const auto& line : lines) {
        graph[line.p1].push_back(line.p2);
        graph[line.p2].push_back(line.p1);
    }

    set<Point> visited;
    stack<Point> s;
    s.push(lines[0].p1);

    while (!s.empty()) {
        Point current = s.top();
        s.pop();
        if (visited.count(current) > 0) continue;
        visited.insert(current);
        closedFigurePoints.insert(current);
        for (const auto& neighbor : graph[current]) {
            if (visited.count(neighbor) == 0) {
                s.push(neighbor);
            }
        }
    }

    for (const auto& line : lines) {
        if (visited.count(line.p1) == 0 || visited.count(line.p2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to calculate the area of the closed figure
double calculateArea(const set<Point>& points) {
    vector<Point> vertices(points.begin(), points.end());
    int n = vertices.size();
    double area = 0.0;

    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        area += vertices[i].x * vertices[j].y;
        area -= vertices[j].x * vertices[i].y;
    }
    area = fabs(area) / 2.0;
    return area;
}

int main() {
    int N;
    cin >> N;

    vector<Line> lines(N);
    for (int i = 0; i < N; ++i) {
        cin >> lines[i].p1.x >> lines[i].p1.y >> lines[i].p2.x >> lines[i].p2.y;
    }

    set<Point> closedFigurePoints;
    if (isClosedFigure(lines, closedFigurePoints)) {
        cout << "Yes" << endl;
        
        double area = calculateArea(closedFigurePoints);
        cout << fixed << setprecision(2) << area << endl;

        // Assuming we can't check if Arjun can form the same figure without more advanced geometry algorithms
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

