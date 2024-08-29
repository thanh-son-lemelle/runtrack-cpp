#ifndef PINGUIN_HPP
#define PINGUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <vector>
#include <memory>

class Pinguin : public Aquatique, public Terrestre, public std::enable_shared_from_this<Pinguin>
{
private:
    //constructeur
    Pinguin(double swimSpeed, double walkSpeed);
    //copy constructor
    Pinguin(const Pinguin &other, double slideSpeed);

    /* data */
    double slideSpeed;
    static std::vector<std::shared_ptr<Pinguin>> pinguinList;
public:

    //destructeur
    ~Pinguin();
    static std::shared_ptr<Pinguin> create(double swimSpeed, double walkSpeed);
    static std::shared_ptr<Pinguin> copyCreate(const Pinguin &other, double slideSpeed);
    
    //methodes
    void selfIntroduction();
    void setSlideSpeed(double speed);
    double getSlideSpeed() const;
    void slide();
    static size_t getPinguinCount();
};
#endif /* PINGUIN_HPP */