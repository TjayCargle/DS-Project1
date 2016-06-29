#pragma once
#include<iostream>
#include<Windows.h>
#include <string>
#include "DynArray.h"

struct menuItem
{
	string name;
	bool is_subMenu;
	string subMenuPath;
};

//menu
//When we group a number of these menuItems together we get a single menu.Each menu has a title(string), a number of menuItems(DynArray<menuItem>) and it will need some way to keep track of which menuItem is currently highlighted.Our menu class might look something like this :

class menu
{
	string title;
	DynArray<menuItem> choices;
	unsigned int currSelection;
};

//menuManager
//The final part of the system is a class that will manage any number of active menus.This should work using stack behavior.
class menuManager
{
	//SLList<menu> activeMenus;
};

