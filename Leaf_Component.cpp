#include "Leaf_Component.h"

Leaf_Component::Leaf_Component(Menu* menu)
{
	this->menu = menu;
}

void Leaf_Component::print()
{
	cout << "Ҷ�˵���" << this->menu->getName() << " " << this->menu->getDescription() << " " << this->menu->isVegetarian() << " " << this->menu->getPrice() << endl;
}
