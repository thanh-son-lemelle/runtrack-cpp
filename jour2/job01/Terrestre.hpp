#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class Terrestre
{
private:
    /* data */
    double walkSpeed;
public:
    Terrestre(double speed);
    ~Terrestre();
    double getWalkSpeed() const;
    virtual void walk();
};

#endif /* TERRESTRE_HPP */