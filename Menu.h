#pragma once
#pragma once
#ifndef MENU_H
#define MENU_H
#include<iostream>
using namespace std;
class Menu{
private:
	string name;
	string description;
	bool vegetarian;
	double price;
public:
	Menu() = default;
	Menu(string name1, string description1, bool vegetarian1, double price1) :name(name1), description(description1), vegetarian(vegetarian1), price(price1) {}
	string getName();
	string getDescription();
	bool isVegetarian();
	double getPrice();
};
#endif // !MENUITEM_H
