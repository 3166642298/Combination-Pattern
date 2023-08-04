#include<iostream>
#include"Component.h"
#include"Leaf_Component.h"
#include"Menu.h"
#include"node_Component.h"
using namespace std;
int main()
{
	Component* allMenu = new Node_Component();//×ÜµÄ²Ëµ¥
	Component* leaf_Menu_1 = new Leaf_Component(new Menu("Óã", "ºìÉÕÓã", true, 45.8));
	Component* leaf_Menu_2 = new Leaf_Component(new Menu("Óã", "Ëá²ËÓã", true, 45.8));
	Component* leaf_Menu_3 = new Leaf_Component(new Menu("Óã", "Ì¼¿¾Óã", true, 45.8));
	Component* leaf_Menu_4 = new Leaf_Component(new Menu("Óã", "ÇåÕôÓã", true, 45.8));
	allMenu->add(leaf_Menu_1);
	allMenu->add(leaf_Menu_2);
	allMenu->add(leaf_Menu_3);
	allMenu->add(leaf_Menu_4);
	Component* node_Menu = new Node_Component();
	Component* node_leaf_Menu_1 = new Leaf_Component(new Menu("Ñ¼", "ºìÉÕÑ¼", true, 45.8));
	Component* node_leaf_Menu_2 = new Leaf_Component(new Menu("Ñ¼", "Ëá²ËÑ¼", true, 45.8));
	Component* node_leaf_Menu_3 = new Leaf_Component(new Menu("Ñ¼", "Ì¼¿¾Ñ¼", true, 45.8));
	Component* node_node_menu = new Node_Component();
	Component* node_node_leaf_Menu_1 = new Leaf_Component(new Menu("¼¦", "ºìÉÕ¼¦", true, 45.8));
	Component* node_node_leaf_Menu_2 = new Leaf_Component(new Menu("¼¦", "Ëá²Ë¼¦", true, 45.8));
	Component* node_node_leaf_Menu_3 = new Leaf_Component(new Menu("¼¦", "Ì¼¿¾¼¦", true, 45.8));
	node_node_menu->add(node_node_leaf_Menu_1);
	node_node_menu->add(node_node_leaf_Menu_2);
	node_node_menu->add(node_node_leaf_Menu_3);
	Component* node_leaf_Menu_5 = new Leaf_Component(new Menu("Ñ¼", "ÇåÕôÑ¼", true, 45.8));
	node_Menu->add(node_leaf_Menu_1);
	node_Menu->add(node_leaf_Menu_2);
	node_Menu->add(node_leaf_Menu_3);
	node_Menu->add(node_node_menu);
	node_Menu->add(node_leaf_Menu_5);
	allMenu->add(node_Menu);
	allMenu->print();
	cout << "////////" << endl;
	Component* menu1 = allMenu->getChild(4);
	menu1->print();
	return 0;
}