#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "Global.h"

/**
* �̰� ���� Ŭ����
* ����� ���� ���̽� Ŭ����
*/

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	//0: �ݼ�
	//1: ����
	//2: �ö�ƽ

	EMaterials Material = EMaterials::Metal;

	
};

#endif