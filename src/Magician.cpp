#include "Magician.h"

Magician::Magician(int lvl, int hp, int xp, int mp): Character(lvl, hp, xp), mana(mp)
{
    //ctor
}

Magician::~Magician()
{
    //dtor
}

void Magician::displayMagicianInformation(void)
{
    Character::displayInformation();
    std::cout << "Mana : " << mana << std::endl;
}

int Magician::getMana(void)
{
    return mana;
};

void Magician::setMana(int mp)
{
    mana = mp;
};
