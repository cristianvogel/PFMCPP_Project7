#include "DragonSlayer.h"
#include "Dragon.h"

DragonSlayer::DragonSlayer( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class Character: Hitpoints, armour, attack damage
        Character( hitPoints_, armour_, 4  ),
        m_hitPoints ( hitPoints_ ) ,
        m_armour ( armour_ ),
        name (name_)
{ }

//DragonSlayer::getName

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
