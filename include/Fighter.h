#ifndef FIGHTER_H
#define FIGHTER_H

#include <iostream>

#include <Character.h>


class Fighter : public Character
{
    public:
        Fighter(int lvl=1, int hp=100, int xp=0, int st=0);
        virtual ~Fighter();

        void displayFighterInformation(void);

        int getStamina(void);

        void setStamina(int st);

    protected:

    private:
        int stamina;
};

#endif // FIGHTER_H
