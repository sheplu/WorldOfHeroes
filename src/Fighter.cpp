#include "Fighter.h"

Fighter::Fighter(int lvl, int hp, int xp, int st): Character(lvl, hp, xp), stamina(st)
{
    //ctor
}

Fighter::~Fighter()
{
    //dtor
}

void Fighter::displayFighterInformation(void)
{
    Character::displayInformation();
    std::cout << "Stamina : " << stamina << std::endl;
}

int Fighter::getStamina(void)
{
    return stamina;
};

void Fighter::setStamina(int st)
{
    stamina = st;
};
