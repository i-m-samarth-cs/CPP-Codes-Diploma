#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

struct State {
    int x, y, moves;
};

int main() {
    int N, M, K;
    cin >> N >> M;

    vector<vector<char>> grid(N, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }
    cin >> K;

    // Find starting position
    int sx, sy;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 'S') {
                sx = i;
                sy = j;
                break;
            }
        }
    }

    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<State> q;
    q.push({sx, sy, 0});
    visited[sx][sy] = true;

    vector<pair<int, pair<int, int>>> distances;

    while (!q.empty()) {
        State curr = q.front();
        q.pop();

        if (curr.moves > K) {
            break;
        }

        // Check for valid moves
        for (int i = 0; i < 4; ++i) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            // Check bounds
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                continue;
            }

            // Check for building
            if (grid[nx][ny] == 'B') {
                continue;
            }

            // Handle gravity
            int stable_row = nx;
            while (stable_row + 1 < N && grid[stable_row + 1][ny] != 'B') {
                ++stable_row;
            }

            // Calculate total moves after gravity
            int total_moves = curr.moves + (stable_row - nx); 

            // Check if reachable within K moves
            if (total_moves <= K && !visited[stable_row][ny]) {
                visited[stable_row][ny] = true;
                q.push({stable_row, ny, total_moves}); 

                int dist = abs(stable_row - sx) + abs(ny - sy);
                distances.push_back({dist, {stable_row, ny}});
            }
        }
    }

    // Sort distances in descending order
    sort(distances.begin(), distances.end(), greater<pair<int, pair<int, int>>>());

    // Find farthest reachable cells
    int max_dist = distances[0].first;
    for (const auto& dist : distances) {
        if (dist.first < max_dist) {
            break;
        }
        cout << dist.second.first << " " << dist.second.second << endl;
    }

    return 0;
}
