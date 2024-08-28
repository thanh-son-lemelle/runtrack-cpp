#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pinguin : public Aquatique, public Terrestre
{
private:
    /* data */
    double swimSpeed;
    double walkSpeed;
public:
    Pinguin(double swimSpeed, double walkSpeed);
    ~Pinguin();
    void selfIntroduction();
};
#endif /* PINGUIN_HPP */