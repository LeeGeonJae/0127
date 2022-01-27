#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "Global.h"

/**
* 이건 무기 클래스
* 상속을 위한 베이스 클래스
*/

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	//0: 금속
	//1: 나무
	//2: 플라스틱

	EMaterials Material = EMaterials::Metal;

	
};

#endif