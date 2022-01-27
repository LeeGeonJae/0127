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


    //�θ� ������ �϶�� ������ ������ override��� �Լ� ���
    //�� �� �� �ڽ� Ŭ������ �����Ǹ� �� ���̸� virtual �Լ� ���
    virtual void Attack() override
    {
        Weapon::Attack();
        Pierce();
    }

protected:
    virtual void Pierce();

};

#endif