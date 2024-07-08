#include "ACharacter.hpp"

ACharacter::ACharacter(std::string name, int hp, int attack, int defense)
    : name(name), hp(hp), attack(attack), defense(defense)
{
    level = 1;
}

ACharacter::~ACharacter()
{
}

bool ACharacter::IsAlive() const
{
    return hp > 0;
}

void ACharacter::TakeDamage(int damage)
{
    int finalDamage;
    // LET'S CODE
    std::cout << name << " takes " << finalDamage << " damage and has " << hp << " HP left.\n" << std::endl;
}

void ACharacter::TakeLevel()
{
    level += 1;
    std::cout << name << " gains a level and is now at level " << level << ". Choose to increase your :\n1. Attack\n2. Defense\n3. Heal\n";
    // LET'S CODE
}
