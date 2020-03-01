#pragma once
#include "Character.h"

struct Dragon : Character
{
public:

    Dragon( const std::string name_  = "Default Dragon", int hp_ = 200 , int armour_ = 50);

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
    
private:
    const std::string name;
};

