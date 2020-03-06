#include "HelpfulItem.h"
#include "Character.h"
#include "Utility.h"

// implementation from overridden parent pure virtual function
void HelpfulItem::use(Character *character)
{
    if (character)
            useHelpfulItem( character, this );
}
