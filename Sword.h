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

    void Pierce();

    void Attack() override
    {
        Pierce();
    }

};

#endif