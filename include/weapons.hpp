#pragma once

#include <iostream>

class Weapon
{
    public:
        virtual ~Weapon();
        virtual void attack() = 0;
        
};

class Sword : public Weapon
{
    public:
        void attack();
};

class Spear : public Weapon
{
    public:
        void attack();
};

class WeaponCreator
{
    public:
        virtual ~WeaponCreator();
        virtual Weapon* createWeapon() = 0;

        void performAttack();
};

class SwordCreator : public WeaponCreator
{
    public:
        virtual ~SwordCreator();
        Weapon* createWeapon();
};

class SpearCreator : public WeaponCreator
{
    public:
        virtual ~SpearCreator();
        Weapon* createWeapon();
};