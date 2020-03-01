#pragma once
#include "Character.h"

struct Dwarf : Character
{
public:
    
    Dwarf( const std::string name_  = "Default Dwarf", int hp_ = 3 , int armour_ = 1);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
