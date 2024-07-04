#ifndef ACHARACTER_HPP
#define ACHARACTER_HPP

#include <string>
#include <iostream>

// Classe abstraite ACharactere
class ACharacter {
    public:
        ACharacter(std::string name, int hp, int attack, int defense);
        virtual ~ACharacter();

        virtual void Attack(ACharacter& target) = 0;

        bool IsAlive() const;
        void TakeDamage(int damage);
        void TakeLevel();

        std::string name;
        int level;
        int hp;
        int attack;
        int defense;

    protected:
};

#endif // ACHARACTERE_HPP
