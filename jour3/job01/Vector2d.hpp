#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <iostream>

class Vector2D
{
private:
    double x;
    double y;

protected:
    /* data */

public:
    //constructeur
    Vector2D(double x, double y); //constructeur
    Vector2D();
    ~Vector2D();

    //getters
    double getX() const;
    double getY() const;

    //setters
    void setX(double x);
    void setY(double y);

    //methodes

    // operator overloading

    Vector2D operator+(const Vector2D &other) const;
    Vector2D operator-(const Vector2D &other) const;
    Vector2D operator*(double scalar) const;
    Vector2D operator/(double scalar) const;
    double operator*(const Vector2D &other) const;
    double operator^(const Vector2D &other) const;

    // vector operations
    void add(const Vector2D &other);
    void substract(const Vector2D &other);
    void multiply(double scalar);
    void divide(double scalar);
    double dotProduct(const Vector2D &other) const;
    double norm() const;
    void normalize();
    void print() const;
    double distance(const Vector2D &other) const;
};
#endif // VECTOR2D_HPP


