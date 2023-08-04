#include "node_Component.h"

void Node_Component::add(Component* component)
{
	this->combination.push_back(component);
}

void Node_Component::remove(Component* component)
{
	int n = 0;
	for (auto components : this->combination)
	{
		if (components == component)
		{
			this->combination.erase(this->combination.begin() + n);
			return;
		}
		n++;
	}
}

Component* Node_Component::getChild(int i)
{
	return this->combination[i];
}

void Node_Component::print()
{
	cout << "×Ó²Ëµ¥" << endl;
	for (auto components : this->combination)
	{
		components->print();
	}
}
