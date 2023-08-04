#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H
#include<iostream>
using namespace std;
class Component {
public:
	virtual void add(Component* component);
	virtual void remove(Component* component);
	virtual Component* getChild(int i);
	virtual void print();
};
#endif