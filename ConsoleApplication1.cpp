
#include "stdafx.h"

#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	Weapon *w = new Weapon;
	shield *b = new shield;
	axe *g = new axe;

	w->loadFeatures();
	b->loadFeatures();
	g->loadFeatures();

	int return1;
	std::cout << "enter" << std::endl;
	std::cin >> return1;
	return 0;
}
