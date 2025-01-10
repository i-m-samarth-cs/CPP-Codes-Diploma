#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <string>
using namespace std;

// Structure to store cell information for priority queue
struct Cell {
    int row, col;
    int time, strength;
    
    Cell(int r, int c, int t, int s) : row(r), col(c), time(t), strength(s) {}
    
    // Custom comparator for priority queue (sort by time)
    bool operator>(const Cell& other) const {
        return time > other.time;
    }
};

// Function to check if position is valid
bool isValid(int row, int col, int N, int M) {
    return row >= 0 && row < N && col >= 0 && col < M;
}

// Direction arrays for movement
const int dx[] = {-1, 1, 0, 0};  // Up, Down, Left, Right
const int dy[] = {0, 0, -1, 1};

pair<int, int> findMaximumStrength(vector<vector<int>>& sharks, vector<vector<int>>& times, 
                                 int N, int M, int K, pair<int, int> start, pair<int, int> end) {
    // Initialize visited array to track maximum strength at each position for given time
    vector<vector<vector<int>>> visited(N, vector<vector<int>>(M, vector<int>(K + 1, -1)));
    
    // Priority queue to store cells (sorted by time)
    priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
    
    // Push starting position
    pq.push(Cell(start.first, start.second, 0, K));
    visited[start.first][start.second][K] = 0;
    
    while (!pq.empty()) {
        Cell current = pq.top();
        pq.pop();
        
        int row = current.row;
        int col = current.col;
        int currentTime = current.time;
        int currentStrength = current.strength;
        
        // If we reached destination
        if (row == end.first && col == end.second) {
            return {currentTime, currentStrength};
        }
        
        // Try all four directions
        for (int i = 0; i < 4; i++) {
            int newRow = row + dx[i];
            int newCol = col + dy[i];
            
            if (!isValid(newRow, newCol, N, M)) continue;
            
            // Calculate new strength after fighting shark and moving
            int strengthRequired = sharks[newRow][newCol];
            int newStrength = currentStrength - strengthRequired - 1; // -1 for swimming
            
            // Skip if strength becomes negative
            if (newStrength < 0) continue;
            
            // Calculate new time
            int newTime = currentTime + times[newRow][newCol];
            
            // If we haven't visited this cell with better strength for less or equal time
            if (visited[newRow][newCol][newStrength] == -1 || 
                visited[newRow][newCol][newStrength] > newTime) {
                visited[newRow][newCol][newStrength] = newTime;
                pq.push(Cell(newRow, newCol, newTime, newStrength));
            }
        }
    }
    
    // If no path found
    return {-1, -1};
}

int main() {
    int N, M;
    cin >> N >> M;
    
    // Read shark strengths and find start/end positions
    vector<vector<int>> sharks(N, vector<int>(M));
    pair<int, int> start, end;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            string cell;
            cin >> cell;
            if (cell == "S") {
                start = {i, j};
                sharks[i][j] = 0;
            }
            else if (cell == "D") {
                end = {i, j};
                sharks[i][j] = 0;
            }
            else {
                sharks[i][j] = stoi(cell);
            }
        }
    }
    
    // Read time matrix
    vector<vector<int>> times(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> times[i][j];
        }
    }
    
    // Read initial strength
    int K;
    cin >> K;
    
    // Find solution
    pair<int, int> result = findMaximumStrength(sharks, times, N, M, K, start, end);
    
    if (result.first == -1) {
        cout << "Not Possible\n";
    } else {
        cout << result.first << " " << result.second << "\n";
    }
    
    return 0;
}
