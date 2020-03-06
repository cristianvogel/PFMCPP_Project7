#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class constructor call 
        //Character: Hitpoints, armour, attack damage
        Character ( hitPoints_, armour_, 4 ),
        name ( name_ )
{ 
    defensiveItems = makeDefensiveItems((std::rand()%10)+1);
    helpfulItems = makeHelpfulItems((std::rand()%10)+1);
}

const std::string& Dwarf::getName() { return name; }

std::string Dwarf::getStats() { return getCharacterStats(this); }
