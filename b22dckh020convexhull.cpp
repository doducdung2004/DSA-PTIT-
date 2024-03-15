#include <iostream>
#include <vector>
#include <ctime>
#include <libqhullcpp/Qhull.h>
#include <libqhullcpp/QhullFacetList.h>
#include <libqhullcpp/QhullPoint.h>
#include <libqhullcpp/QhullVertexSet.h>

struct Point {
    int x, y;
};

// H�m t�nh h�?ng quay c?a 3 �i?m
int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0; // Collinear
    return (val > 0) ? 1 : 2; // Clockwise or Counterclockwise
}

// H�m so s�nh 2 �i?m theo g�c polar
bool comparePoints(Point p1, Point p2) {
    int o = orientation(p0, p1, p2);
    if (o == 0) {
        // Tr�?ng h?p 3 �i?m th?ng h�ng, ch?n �i?m g?n h�n
        return (p1.x * p1.x + p1.y * p1.y) < (p2.x * p2.x + p2.y * p2.y);
    }
    return (o == 2);
}

// H�m t?m Convex Hull
std::vector<Point> convexHull(std::vector<Point>& points) {
    int n = points.size();
    if (n < 3) return {};

    // T?m �i?m th?p nh?t (y nh? nh?t) v� ��a l�n �?u danh s�ch
    int ymin = points[0].y, minIdx = 0;
    for (int i = 1; i < n; i++) {
        int y = points[i].y;
        if ((y < ymin) || (ymin == y && points[i].x < points[minIdx].x)) {
            ymin = points[i].y;
            minIdx = i;
        }
    }
    std::swap(points[0], points[minIdx]);

    // S?p x?p c�c �i?m c?n l?i theo g�c polar t��ng �?i v?i �i?m th?p nh?t
    p0 = points[0];
    std::sort(points.begin() + 1, points.end(), comparePoints);

    // Lo?i b? c�c �i?m tr�ng nhau ho?c c�ng n?m tr�n c�ng cung
    int m = 1;
    for (int i = 1; i < n; i++) {
        while (i < n - 1 && orientation(p0, points[i], points[i + 1]) == 0)
            i++;
        points[m] = points[i];
        m++;
    }
    if (m < 3) return {};

    std::stack<Point> hull;
    hull.push(points[0]);
    hull.push(points[1]);
    hull.push(points[2]);

    // X�y d?ng Convex Hull b?ng c�ch duy?t qua t?t c? c�c �i?m c?n l?i
    for (int i = 3; i < m; i++) {
        while (orientation(nextToTop(hull), hull.top(), points[i]) != 2)
            hull.pop();
        hull.push(points[i]);
    }

    // Chuy?n Convex Hull t? stack sang vector
    std::vector<Point> result;
    while (!hull.empty()) {
        result.push_back(hull.top());
        hull.pop();
    }
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return 0;
    }

    std::vector<Point> points;
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string value;
        Point p;
        std::getline(ss, value, ',');
        p.x = std::stoi(value);
        std::getline(ss, value, ',');
        p.y = std::stoi(value);
        points.push_back(p);
    }

    file.close();

    std::vector<Point> convexHullPoints = convexHull(points);

    std::cout << "Convex Hull Points:" << std::endl;
  

    for (const Point& p : convexHullPoints) {
        std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
    }

    return 0;
}
