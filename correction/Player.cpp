#include "Player.hpp"

Soldier::Soldier(std::string name)
    : ACharacter(name, 100, 15, 10)
{
}

void Soldier::Attack(ACharacter& target)
{
    std::cout << name << " attacks with sword!" << std::endl;
    target.TakeDamage(attack);
}

Mage::Mage(std::string name)
    : ACharacter(name, 80, 20, 8)
{
}

void Mage::Attack(ACharacter& target)
{
    std::cout << name << " casts a fireball!" << std::endl;
    target.TakeDamage(attack);
}

Rogue::Rogue(std::string name)
    : ACharacter(name, 70, 25, 5)
{
}

void Rogue::Attack(ACharacter& target)
{
    std::cout << name << " strikes with daggers!" << std::endl;
    target.TakeDamage(attack);
}
