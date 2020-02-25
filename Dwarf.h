#pragma once
#include "Character.h"

struct Dwarf : Character
{
public:
    int m_hitPoints;
    int m_armour;
    
    Dwarf( const std::string name_  = "Default Dwarf", int hp_ = 3 , int armour_ = 1);

    std::string& getName();
    std::string getStats();

private:
    const std::string name;
};
