#include <iostream>
#include <weapons.hpp>

int main()
{

    WeaponCreator* swordCreator = new SwordCreator();
    WeaponCreator* spearCreator = new SpearCreator();

    swordCreator->performAttack();

    Weapon* sword = swordCreator->createWeapon();
    Weapon* spear = spearCreator->createWeapon();

    sword->attack();
    spear->attack();

    delete sword;
    delete spear;
    delete swordCreator;

    return 0;
}