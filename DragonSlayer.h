#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
public:
    
    DragonSlayer( const std::string name_  = "Default DragonSlayer", int hp_ = 8 , int armour_ = 5);

   std::unique_ptr<AttackItem> attackItem{ new AttackItem() };
   
    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
    
private:
    const std::string name;
};
