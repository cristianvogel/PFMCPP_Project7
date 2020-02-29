#include "DefensiveItem.h"
#include "Character.h"
#include "Utility.h"
//#include <assert>

void DefensiveItem::use(Character* character) 
{
    // assert(false);
    // make your defensive item use the appropriate Utility helper functions
    if (character)
    {   
        auto& items = character->getDefensiveItems();
        useDefensiveItem( character, *(items.at(0)) );
    };
  
}
