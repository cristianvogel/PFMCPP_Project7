#include "AttackItem.h"
#include "Character.h"
#include "DragonSlayer.h"
#include "Utility.h"

// implementation from overridden parent pure virtual function
void AttackItem::use(Character *character)
{
    if (character)
    {   
        if( auto* ch = dynamic_cast<DragonSlayer*>(character) )
            useAttackItem( character, &*(ch->attackItem) );
    };

}
