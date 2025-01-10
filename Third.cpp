#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store instruction
struct Instruction {
    string direction;
    int distance;
};

// Structure to store coordinates
struct Point {
    int x, y;
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
};

// Structure to store current state
struct State {
    int x, y;
    string facing;  // north, south, east, west
    
    State(int _x = 0, int _y = 0, string _facing = "north") 
        : x(_x), y(_y), facing(_facing) {}
};

// Get new direction after turn
string getNewDirection(string current, string turn) {
    if (turn == "straight") return current;
    if (turn == "back") {
        if (current == "north") return "south";
        if (current == "south") return "north";
        if (current == "east") return "west";
        return "east";
    }
    if (turn == "left") {
        if (current == "north") return "west";
        if (current == "south") return "east";
        if (current == "east") return "north";
        return "south";
    }
    if (turn == "right") {
        if (current == "north") return "east";
        if (current == "south") return "west";
        if (current == "east") return "south";
        return "north";
    }
    return current;
}

// Move in given direction for given distance
State move(State current, string direction, int distance) {
    State newState = current;
    if (direction == "north") newState.y += distance;
    else if (direction == "south") newState.y -= distance;
    else if (direction == "east") newState.x += distance;
    else if (direction == "west") newState.x -= distance;
    newState.facing = direction;
    return newState;
}

// Get opposite turn
string getOppositeDirection(string direction) {
    if (direction == "left") return "right";
    if (direction == "right") return "left";
    if (direction == "straight") return "back";
    return "straight";
}

// Try all possible corrections and check if destination can be reached
bool tryCorrection(vector<Instruction>& instructions, Point start, Point end, 
                  int& wrongIndex, string& correctTurn) {
    State current;
    current.x = start.x;
    current.y = start.y;
    current.facing = "north";
    
    vector<string> possibleTurns = {"left", "right", "straight", "back"};
    
    // Try changing each instruction
    size_t instSize = instructions.size();  // Store size to avoid multiple calls
    for (size_t i = 0; i < instSize; i++) {
        State temp = current;
        
        // Try each possible turn at this position
        for (string newTurn : possibleTurns) {
            if (newTurn == instructions[i].direction) continue;
            
            State testState = temp;
            bool canReach = true;
            
            // Test this change
            for (size_t j = i; j < instSize; j++) {
                string turn = (j == i) ? newTurn : instructions[j].direction;
                testState.facing = getNewDirection(testState.facing, turn);
                testState = move(testState, testState.facing, instructions[j].distance);
            }
            
            // If we reach destination
            if (testState.x == end.x && testState.y == end.y) {
                wrongIndex = static_cast<int>(i);  // Cast size_t to int for output
                correctTurn = newTurn;
                return true;
            }
        }
        
        // Move to next position with original instruction
        current.facing = getNewDirection(current.facing, instructions[i].direction);
        current = move(current, current.facing, instructions[i].distance);
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    
    vector<Instruction> instructions(N);
    for (int i = 0; i < N; i++) {
        cin >> instructions[i].direction >> instructions[i].distance;
    }
    
    Point start, end;
    cin >> start.x >> start.y;
    cin >> end.x >> end.y;
    
    int wrongIndex;
    string correctTurn;
    
    if (tryCorrection(instructions, start, end, wrongIndex, correctTurn)) {
        cout << "Yes\n";
        cout << instructions[wrongIndex].direction << " " 
             << instructions[wrongIndex].distance << "\n";
        cout << correctTurn << " " << instructions[wrongIndex].distance << "\n";
    } else {
        cout << "No\n";
    }
    
    return 0;
}
