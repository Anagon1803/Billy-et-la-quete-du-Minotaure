#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "ACharacter.hpp"

class SoldierSlime : public ACharacter {
    public:
        SoldierSlime();
        void Attack(ACharacter& target) override;
};

class RedMage : public ACharacter {
    public:
        RedMage();
        void Attack(ACharacter& target) override;
};

class Minotaur : public ACharacter {
    public:
        Minotaur();
        void Attack(ACharacter& target) override;
};

#endif // MONSTER_HPP
