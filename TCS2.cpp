#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function to simulate the game with given snakes and ladders map
int simulateGame(const vector<int>& diceRolls, const map<int, int>& board) {
    int position = 1;
    for (int i = 0; i < diceRolls.size(); i++) {
        position += diceRolls[i];
        if (position > 100) return -1; // Out of bounds
        // Check if current position has a snake or ladder
        if (board.find(position) != board.end()) {
            position = board.find(position)->second; // Move to the destination
        }
    }
    return position;
}

int main() {
    int N;
    cin >> N;

    // Read snakes and ladders
    map<int, int> snakesAndLadders;
    vector<pair<int, int> > changes;
    for (int i = 0; i < N; i++) {
        int from, to;
        cin >> from >> to;
        snakesAndLadders[from] = to;
        changes.push_back(make_pair(from, to));
    }

    // Read dice rolls
    vector<int> diceRolls;
    int roll;
    while (cin >> roll) {
        diceRolls.push_back(roll);
        if (cin.peek() == '\n') break; // Stop reading on newline
    }

    // Read the final position
    int target;
    cin >> target;

    // Step 1: Check if target is reachable without any switch
    int finalPosition = simulateGame(diceRolls, snakesAndLadders);
    if (finalPosition == target) {
        cout << "Not affected" << endl;
        return 0;
    }

    // Step 2: Try switching each snake to ladder and each ladder to snake
    for (int i = 0; i < changes.size(); i++) {
        int from = changes[i].first;
        int to = changes[i].second;

        // Create a copy of the original board
        map<int, int> modifiedBoard = snakesAndLadders;

        // Remove the current snake/ladder
        modifiedBoard.erase(from);

        // Case 1: If it was a snake, change it to a ladder
        if (from > to) {
            modifiedBoard[from] = 100; // Snake changed to ladder pointing to the end
        } else {
            modifiedBoard[from] = 1; // Ladder changed to snake going to start
        }

        // Simulate the game with the modified board
        finalPosition = simulateGame(diceRolls, modifiedBoard);

        if (finalPosition == target) {
            // Determine if snake or ladder switched
            string type = (from > to) ? "Ladder" : "Snake";
            cout << type << " " << from << " " << to << endl;
            return 0;
        }
    }

    // No valid switch found
    cout << "Not reachable" << endl;
    return 0;
}

