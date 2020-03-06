#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer( const std::string name_  , int hitPoints_ , int armour_ ) :
        //Base Class Character: Hitpoints, armour, attack damage
        Character( hitPoints_, armour_, 4  ),
        name (name_)
{ 
    defensiveItems = makeDefensiveItems((std::rand()%10)+1);
    helpfulItems = makeHelpfulItems((std::rand()%10)+1);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
       // assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        attackItem->use ( this );

        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other); 
}

const std::string& DragonSlayer::getName() { return name;}

std::string DragonSlayer::getStats() { return getCharacterStats(this); }
