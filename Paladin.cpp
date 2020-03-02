#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class Character: Hitpoints, armour, attack damage
        Character( hitPoints_, armour_, 10  ),
        name (name_)
{ 
    defensiveItems = makeDefensiveItems((std::rand()%10)+1);
    helpfulItems = makeHelpfulItems((std::rand()%10)+1);
}

const std::string& Paladin::getName() { return name; }

std::string  Paladin::getStats() { return getCharacterStats(this); }
