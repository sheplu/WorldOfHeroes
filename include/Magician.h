#ifndef MAGICIAN_H
#define MAGICIAN_H

#include <iostream>

#include <Character.h>


class Magician : public Character
{
    public:
        Magician(int lvl=1, int hp=100, int xp=0, int mp=0);
        virtual ~Magician();

        void displayMagicianInformation(void);

        int getMana(void);

        void setMana(int mp);

    protected:

    private:
        int mana;
};

#endif // MAGICIAN_H
