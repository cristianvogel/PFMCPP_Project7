#pragma once
#include "Character.h"

struct Paladin : Character
{
public:
    int m_hitPoints;
    int m_armour;
    
    Paladin( const std::string name_  = "Default Paladin", int hp_ = 5 , int armour_ = 2);

    std::string& getName();
    std::string getStats();

private:
    const std::string name;
};
