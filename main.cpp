#include <iostream>
#include "Weapon.h"
#include "Gun.h"
#include "Sword.h"
#include "Club.h"
#include <vector>

using namespace std;



int main()
{
//	Weapon* Inventory[3];
//	Inventory[0] = new Gun();
//	Inventory[1] = new Sword();
//	Inventory[2] = new Club();

	//container, 동적 배열
	vector<Weapon*> Inventory;

	Inventory.push_back(new Gun());
	Inventory.push_back(new Sword());
	Inventory.push_back(new Club());

	Gun* Item1 = dynamic_cast<Gun*>(Inventory[0]);
	Item1->Shot();

	Sword* Item2 = dynamic_cast<Sword*>(Inventory[1]);
	Item2->Pierce();

	Club* Item3 = dynamic_cast<Club*>(Inventory[2]);
	Item3->Swing();

	return 0;
}