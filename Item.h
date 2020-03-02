#pragma once

#include <string>

struct Character;

struct Item
{
    //Destructor
    virtual ~Item();

    //pure virtual function
    virtual void use(Character*) = 0;

    //Constructor
  //  MOve implementations to cpp file. 
  
    //YOU STILL NEED THE DECLARATIONS

    Item(const std::string& name_, int effect );

    const std::string& getName();
    int getBoost() const ;

private:
    std::string name;
    int boost;
};
