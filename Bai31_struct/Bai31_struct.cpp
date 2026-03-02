#include <iostream>
#include <vector>

struct Point {
    double x{ 0 }, y{ 0 };
    Point() = default;
    Point(double x_, double y_) : x(x_), y(y_) {}
    double dist2() const { return x * x + y * y; } // OP^2 = dist2
};

struct Point2 {
    double x;
    double y;
};

int main() {

    Point p{ 3.0, 4.0 };
    std::cout << "OP^2 = " << p.dist2() << '\n'; // 25

    Point2 p2;
    p2.x = 3.0;
    p2.y = 4.0;
    std::cout << "OP2^2 = " << p2.x * p2.x + p2.y * p2.y << std::endl; // 25

    return 0;
}