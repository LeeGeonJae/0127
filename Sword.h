#pragma once
#include "Weapon.h"
#ifndef __SWORD_H__
#define __SWORD_H__

class Sword :
    public Weapon
{
public:
    Sword();
    virtual ~Sword();


    //부모가 재정의 하라고 권한을 줬으면 override라는 함수 사용
    //또 한 번 자식 클래스에 재정의를 할 것이면 virtual 함수 사용
    virtual void Attack() override
    {
        Weapon::Attack();
        Pierce();
    }

protected:
    virtual void Pierce();

};

#endif