#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <vector>
#include <memory>

class Pinguin : public Aquatique, public Terrestre, public std::enable_shared_from_this<Pinguin>
{
private:
    /* data */
    double slideSpeed;
public:
    //constructeur
    Pinguin(double swimSpeed, double walkSpeed, double slidespeed);
    //copy constructor
    Pinguin(const Pinguin &other);
    //destructeur
    ~Pinguin();
    //methodes
    void selfIntroduction();
    void setSlideSpeed(double speed);
    double getSlideSpeed() const;
    void slide();
};
#endif /* PINGUIN_HPP */