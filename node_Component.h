#pragma once
#ifndef NODE_COMPONENT_H
#define NODE_COMPONENT_H
#include"Component.h"
#include"Menu.h"
#include<vector>
class Node_Component :public Component {
private:
	vector<Component*> combination;
public:
	void add(Component* component) override;
	void remove(Component* component) override;
	Component* getChild(int i);
	void print() override;
};
#endif // !NODE_COMPONENT_H
