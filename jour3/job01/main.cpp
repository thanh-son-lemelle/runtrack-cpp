#include "Vector2d.hpp"

int main() {
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);

    Vector2D v3 = v1 + v2;
    v3.print();

    Vector2D v4 = v1 - v2;
    v4.print();

    Vector2D v5 = v1 * 2;
    v5.print();

    Vector2D v6 = v1 / 2;
    v6.print();

    double dotProduct = v1 * v2;
    std::cout << "Dot product: " << dotProduct << std::endl;

    double norm = v1.norm();
    std::cout << "Norm: " << norm << std::endl;

    v1.normalize();
    v1.print();

    Vector2D v7;
    v7.print();

    v7 = v2 + v3;
    v7.print();

    double distanceV1V7m = v7.distance(v1);
    std::cout << "Distance between v1 and v7: " << distanceV1V7m << std::endl;

    return 0;
}