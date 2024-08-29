#include "Vector2d.hpp"
#include <math.h>

//constructeur

Vector2D::Vector2D(double x, double y)
    : x(x), y(y) {}

Vector2D::Vector2D()
    : x(0), y(0) {}

Vector2D::~Vector2D() {}

//getters

double Vector2D::getX() const
{
    return x;
}

double Vector2D::getY() const
{
    return y;
}

//setters

void Vector2D::setX(double x)
{
    this->x = x;
}

void Vector2D::setY(double y)
{
    this->y = y;
}

//methodes
// operator overloading

Vector2D Vector2D::operator+(const Vector2D &other) const
{
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D &other) const
{
    return Vector2D(x - other.x, y - other.y);
}

Vector2D Vector2D::operator*(double scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}

Vector2D Vector2D::operator/(double scalar) const
{
    return Vector2D(x / scalar, y / scalar);
}

double Vector2D::operator*(const Vector2D &other) const
{
    return x * other.x + y * other.y;
}

double Vector2D::operator^(const Vector2D &other) const
{
    return x * other.y - y * other.x;
}

// vector operations

void Vector2D::add(const Vector2D &other)
{
    x += other.x;
    y += other.y;
}

void Vector2D::substract(const Vector2D &other)
{
    x -= other.x;
    y -= other.y;
}

void Vector2D::multiply(double scalar)
{
    x *= scalar;
    y *= scalar;
}

void Vector2D::divide(double scalar)
{
    x /= scalar;
    y /= scalar;
}

double Vector2D::dotProduct(const Vector2D &other) const
{
    return x * other.x + y * other.y;
}

double Vector2D::norm() const
{
    return sqrt(x * x + y * y);
}

void Vector2D::normalize()
{
    double n = norm();
    x /= n;
    y /= n;
}

void Vector2D::print() const
{
    std::cout << "Vector2D(" << x << ", " << y << ")" << std::endl;
}

double Vector2D::distance(const Vector2D& other) const {
    return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
}
