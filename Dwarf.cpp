#include "Dwarf.h"

Dwarf::Dwarf( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class Character: Hitpoints, armour, attack damage
        Character( hitPoints_, armour_, 4  ),
        m_hitPoints ( hitPoints_ ) ,
        m_armour ( armour_ ),
        name (name_)
{ }

//Dwarf::getName

//Dwarf::getStats
