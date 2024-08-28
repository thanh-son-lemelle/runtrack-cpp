#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class Aquatique
{
    private:
        /* data */
        double swimSpeed;
    protected:
        /* data */
    public:
        Aquatique(double speed);
        ~Aquatique();
        double getSwimSpeed() const;
        virtual void swim();
};
#endif /* AQUATIQUE_HPP */