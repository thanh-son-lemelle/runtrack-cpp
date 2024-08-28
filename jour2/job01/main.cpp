#include "Pinguin.hpp"

int main(int argc, char const *argv[])
{
    Pinguin pinguin(5.0, 2.0);
    pinguin.selfIntroduction();
    pinguin.swim();
    pinguin.walk();
    return 0;
}
