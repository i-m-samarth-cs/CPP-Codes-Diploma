#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    
    // Compare points by x-coordinate
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};

// Calculate distance between two points
double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Check if three points form a counterclockwise turn
int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
}

// Find the points that form the bottom of the bowl (lower convex hull)
vector<Point> findBowlPoints(vector<Point>& points) {
    int n = points.size();
    if (n < 3) return points;
    
    // Sort points by x-coordinate
    sort(points.begin(), points.end());
    
    vector<Point> hull;
    
    // Build lower hull (this will form our bowl)
    for (int i = 0; i < n; i++) {
        while (hull.size() >= 2 && orientation(hull[hull.size()-2], 
               hull[hull.size()-1], points[i]) != 2) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }
    
    return hull;
}

// Calculate perimeter of the bowl
double calculatePerimeter(const vector<Point>& bowlPoints) {
    double perimeter = 0;
    size_t n = bowlPoints.size();  // Use size_t instead of int for array sizes
    for (size_t i = 0; i < n - 1; i++) {  // Changed loop to use size_t
        perimeter += distance(bowlPoints[i], bowlPoints[i + 1]);
    }
    return perimeter;
}

int main() {
    int N;
    cin >> N;
    
    vector<Point> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    // Find points forming the bowl
    vector<Point> bowlPoints = findBowlPoints(points);
    
    // Calculate perimeter
    double perimeter = calculatePerimeter(bowlPoints);
    
    // Round to nearest integer
    int roundedPerimeter = round(perimeter);
    
    cout << roundedPerimeter << endl;
    
    return 0;
}
