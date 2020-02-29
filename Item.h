#pragma once

#include <string>

struct Character;
struct Item
{
    //Destructor
    virtual ~Item() { }

    //pure virtual function
    virtual void use(Character*) = 0;

    //Constructor
    Item(const std::string& name_, int effect ) : name(name_), boost(effect) { }

    //inlining https://www.learncpp.com/cpp-tutorial/75-inline-functions/
    inline const std::string& getName() { return name; }
    inline int getBoost() const { return boost; }
private:
    std::string name;
    int boost;
};
