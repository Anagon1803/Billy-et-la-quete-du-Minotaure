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
    int finalDamage = damage - defense;

    if (finalDamage < 0)
        finalDamage = 0;
    hp -= finalDamage;
    std::cout << name << " takes " << finalDamage << " damage and has " << hp << " HP left.\n" << std::endl;
}

void ACharacter::TakeLevel()
{
    level += 1;
    std::cout << name << " gains a level and is now at level " << level << ". Choose to increase your :\n1. Attack\n2. Defense\n3. Heal\n";
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            attack += level;
            std::cout << name << " gains " << level << " points in Attack." << std::endl;
            break;
        case 2:
            defense += level;
            std::cout << name << " gains " << level << " points in Defense." << std::endl;
            break;
        case 3:
            hp += 50*hp/100;
            std::cout << name << " gains " << 50*hp/100 << " HP." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Defaulting to Heal." << std::endl;
            hp += 50*hp/100;
            break;
    }
}
