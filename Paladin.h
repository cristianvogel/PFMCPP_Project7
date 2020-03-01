#pragma once
#include "Character.h"

struct Paladin : Character
{
public:
    
    Paladin( const std::string name_  = "Default Paladin", int hp_ = 5 , int armour_ = 2);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
