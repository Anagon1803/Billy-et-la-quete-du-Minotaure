#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "ACharacter.hpp"

class Soldier : public ACharacter {
    public:
        Soldier(std::string name);
        void Attack(ACharacter& target) override;
};

class Mage : public ACharacter {
    public:
        Mage(std::string name);
        void Attack(ACharacter& target) override;
};

class Rogue : public ACharacter {
    public:
        Rogue(std::string name);
        void Attack(ACharacter& target) override;
};

#endif // PLAYER_HPP
