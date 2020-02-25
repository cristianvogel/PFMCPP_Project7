#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class Character: Hitpoints, armour, attack damage
        Character( hitPoints_, armour_, 80  ),
        m_hitPoints ( hitPoints_ ) ,
        m_armour ( armour_ ),
        name (name_)
{ }

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats
