#include "Menu.h"

string Menu::getName()
{
    return this->name;
}

string Menu::getDescription()
{
    return this->description;
}

bool Menu::isVegetarian()
{
    return this->vegetarian;
}

double Menu::getPrice()
{
    return this->price;
}
