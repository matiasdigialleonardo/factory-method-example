#include <weapons.hpp>

Weapon::~Weapon(){};

WeaponCreator::~WeaponCreator(){};

SwordCreator::~SwordCreator(){};

SpearCreator::~SpearCreator(){};

void Sword::attack()
{
    std::cout << "Attacking with sword." << std::endl;
};

void Spear::attack()
{
            std::cout << "Attacking with spear." << std::endl;
};

void WeaponCreator::performAttack()
{
    Weapon* weapon = createWeapon();
    weapon->attack();

    delete weapon;
};


Weapon* SwordCreator::createWeapon()
{
    return new Sword();

};

Weapon* SpearCreator::createWeapon()
{
    return new Spear();
};