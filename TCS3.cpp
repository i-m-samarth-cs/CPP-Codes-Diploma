#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <climits>
using namespace std;

struct Flight {
    string destination;
    int takeOff, landing, cost;
};

struct State {
    string city;
    int time, cost;
    bool operator>(const State &other) const {
        return cost > other.cost;
    }
};

// Function to convert time in HHMM format to minutes from midnight
int convertToMinutes(const string &time) {
    return stoi(time.substr(0, 2)) * 60 + stoi(time.substr(2, 2));
}

int findMinCost(const string &start, const string &end, map<string, vector<Flight>> &flights) {
    priority_queue<State, vector<State>, greater<State>> pq;
    map<string, int> minCost;
    map<string, int> minTime;

    // Initialize the priority queue with the starting city
    pq.push({start, 0, 0});
    minCost[start] = 0;
    minTime[start] = 0;

    while (!pq.empty()) {
        State curr = pq.top();
        pq.pop();

        // If we reach the destination city, return the cost
        if (curr.city == end) {
            return curr.cost;
        }

        // Check if there are flights available from the current city
        if (flights.find(curr.city) != flights.end()) {
            for (const auto &flight : flights[curr.city]) {
                int departureTime = flight.takeOff;
                int arrivalTime = flight.landing;

                // Only consider flights that we can take after reaching the city
                if (curr.time <= departureTime) {
                    int newCost = curr.cost + flight.cost;
                    int newTime = arrivalTime;

                    // Check if this route offers a cheaper way to reach the destination city
                    if (minCost.find(flight.destination) == minCost.end() || newCost < minCost[flight.destination]) {
                        minCost[flight.destination] = newCost;
                        minTime[flight.destination] = newTime;
                        pq.push({flight.destination, newTime, newCost});
                    }
                }
            }
        }
    }
    return -1; // If destination is not reachable, return -1
}

int main() {
    int N;
    cin >> N;
    if (N <= 0) {
        cout << "Impossible" << endl;
        return 0;
    }

    map<string, vector<Flight>> flights;

    for (int i = 0; i < N; i++) {
        string from, to, takeOff, landing;
        int cost;
        cin >> from >> to >> takeOff >> landing >> cost;

        if (takeOff.length() != 4 || landing.length() != 4) {
            cout << "Invalid time format" << endl;
            return 0;
        }

        int takeOffTime = convertToMinutes(takeOff);
        int landingTime = convertToMinutes(landing);

        // Handle flights and store in the map
        flights[from].push_back({to, takeOffTime, landingTime, cost});
    }

    string start = "A";
    string end = "B";

    // Check if the input cities exist in the data
    if (flights.find(start) == flights.end()) {
        cout << "Impossible" << endl;
        return 0;
    }

    int result = findMinCost(start, end, flights);
    if (result == -1) {
        cout << "Impossible" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}

