#pragma once
#ifndef LEAF_COPMONENT_H
#define LEAF_COMPONENT_H
#include"Component.h"
#include"Menu.h"
//�����ͼ�����Ҷ����
class Leaf_Component :public Component {
private:
	Menu* menu;
public:
	Leaf_Component() = default;
	Leaf_Component(Menu* menu);
	void print() override;
};
#endif 