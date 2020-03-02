#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
public:
    
    DragonSlayer( const std::string name_ , int hp_ , int armour_ );

    std::unique_ptr<AttackItem> attackItem{ new AttackItem() };
   
    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
    
private:
    const std::string name;
};
