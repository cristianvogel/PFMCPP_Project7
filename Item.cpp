#include "Item.h"

Item::~Item() { }

Item::Item(const std::string& name_, int effect ) : name(name_), boost(effect) { }

const std::string& Item::getName() { return name; }
int Item::getBoost() const { return boost; }
