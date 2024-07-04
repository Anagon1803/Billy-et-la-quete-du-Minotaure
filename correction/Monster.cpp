#include "Monster.hpp"

SoldierSlime::SoldierSlime()
    : ACharacter("Soldier Slime", 60, 15, 5)
{
}

void SoldierSlime::Attack(ACharacter& target)
{
    std::cout << name << " bashes with its slime body!" << std::endl;
    target.TakeDamage(attack);
}

RedMage::RedMage()
    : ACharacter("Red Mage", 50, 20, 3)
{
}

void RedMage::Attack(ACharacter& target)
{
    std::cout << name << " casts a dark spell!" << std::endl;
    target.TakeDamage(attack);
}

Minotaur::Minotaur()
    : ACharacter("Minotaur", 120, 30, 12)
{
}

void Minotaur::Attack(ACharacter& target)
{
    std::cout << name << " charges with its horns!" << std::endl;
    target.TakeDamage(attack);
}
