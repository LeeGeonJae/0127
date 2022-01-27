#pragma once
#include "Weapon.h"

#ifndef __GUN_H__
#define __GUN_H__

/*
* 이건 총 클래스
*/

class Gun : public Weapon
{
public:
	Gun();
	virtual ~Gun();

	int Bullet;


	virtual void Attack() override
	{
		Weapon::Attack();
		Shot();
	}

protected:
	virtual void Shot();

};

#endif