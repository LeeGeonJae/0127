#pragma once
#include "Weapon.h"
#ifndef __CLUB_H__
#define __CLUB_H__

class Club :
    public Weapon
{
public:
    Club();
    virtual ~Club();


    virtual void Attack() override
    {
        Weapon::Attack();
        Swing();
    }

protected:
    virtual void Swing();

};

#endif