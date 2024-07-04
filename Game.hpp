#ifndef GAME_HPP_
#define GAME_HPP_

#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "Player.hpp"
#include "Monster.hpp"

class Game {
    public:
        Game();
        void Start();
        void ShowState();

    private:
        std::unique_ptr<ACharacter> player;
        std::unique_ptr<ACharacter> monster;

        void ChooseCharacter();
        void EncounterMonster();
        void Battle();
};

#endif /* !GAME_HPP_ */
