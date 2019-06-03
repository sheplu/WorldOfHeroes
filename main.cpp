#include <iostream>

#include "Character.h"
#include "Fighter.h"
#include "Magician.h"
#include "Paladin.h"
#include "Swordman.h"
#include "Sorcerer.h"
#include "Warlock.h"

using namespace std;

int main()
{
    cout << "World of Heroes" << endl;

    Fighter fighter(1, 200, 10, 100);
    fighter.displayFighterInformation();

    Magician magician(1, 200, 10, 100);
    magician.displayMagicianInformation();

    return 0;
}
