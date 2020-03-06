#include "AttackItem.h"
#include "Character.h"
#include "DragonSlayer.h"
#include "Utility.h"

// implementation from overridden parent pure virtual function
void AttackItem::use(Character *character)
{
    useAttackItem(character, this);
}
