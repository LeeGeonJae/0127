#include "Gun.h"
#include <iostream>

using namespace std;


Gun::Gun()
{
	cout << "Gun 생성자" << endl;
}

Gun::~Gun()
{
	cout << "Gun 파괴자" << endl;
}

void Gun::Shot()
{
	cout << "발사" << endl;
}
