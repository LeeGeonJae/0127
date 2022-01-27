#include "Weapon.h"
#include <iostream>

using namespace std;


Weapon::Weapon()
{
	cout << "Weapon 생성자" << endl;
}

Weapon::~Weapon()
{
	cout << "Weapon 파괴자" << endl;
}
