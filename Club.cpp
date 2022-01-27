#include "Club.h"
#include <iostream>

using namespace std;

Club::Club()
{
	cout << "¸ùµÕÀÌ »ý¼ºÀÚ" << endl;
}

Club::~Club()
{
	cout << "¸ùµÕÀÌ ÆÄ±«ÀÚ" << endl;
}

void Club::Swing()
{
	cout << "ÈÖµÎ¸£´Ù" << endl;
}
