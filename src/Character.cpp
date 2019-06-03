#include "Character.h"

#include <iostream>

Character::Character(int lvl, int hp, int xp): level(lvl), life(hp), experience(xp)
{
    //ctor
}

Character::~Character()
{
    //dtor
}

void Character::displayInformation(void)
{
    std::cout << "Level : " << level << std::endl;
    std::cout << "Life : " << life << std::endl;
    std::cout << "Experience : " << experience << std::endl;
}

// Getters
int Character::getLevel(void)
{
    return level;
};

int Character::getLife(void)
{
    return life;
};

int Character::getExperience(void)
{
    return experience;
};

// Setters
void Character::setLevel(int lvl)
{
    level = lvl;
};

void Character::setLife(int hp)
{
    life = hp;
};

void Character::setExperience(int xp)
{
    experience = xp;
};
