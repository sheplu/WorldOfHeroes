#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
    public:
        Character(int lvl=1, int hp=100, int xp=0);
        virtual ~Character();

        void displayInformation(void);

        int getLevel(void);
        int getLife(void);
        int getExperience(void);

        void setLevel(int lvl);
        void setLife(int hp);
        void setExperience(int xp);

    protected:

    private:
        int level;
        int life;
        int experience;
};

#endif // CHARACTER_H
