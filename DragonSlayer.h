#pragma once
#include "DragonSlayer.h"

struct DragonSlayer : Character
{
public:
    int m_hitPoints;
    int m_armour;
    
    DragonSlayer( const std::string name_  = "Default DragonSlayer", int hp_ = 8 , int armour_ = 5);

    std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
};
