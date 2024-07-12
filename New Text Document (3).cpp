#include <iostream>
#include <cmath>

struct Point3D {
    double x, y, z;
};

void inputPoint(Point3D &point, std::string pointName) {
    std::cout << "Enter coordinates for point " << pointName << " (x y z): ";
    std::cin >> point.x >> point.y >> point.z;
}

double distanceBetweenPoints(Point3D p1, Point3D p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

bool pointsOnSamePlane(Point3D p1, Point3D p2) {
    return (p1.z == p2.z);
}

int main() {
    Point3D pointA, pointB;

    inputPoint(pointA, "A");
    inputPoint(pointB, "B");

    double distance = distanceBetweenPoints(pointA, pointB);
    std::cout << "Distance between points A and B: " << distance << std::endl;

    if (pointsOnSamePlane(pointA, pointB)) {
        std::cout << "Points A and B are on the same plane." << std::endl;
    } else {
        std::cout << "Points A and B are not on the same plane." << std::endl;
    }

    return 0;
}