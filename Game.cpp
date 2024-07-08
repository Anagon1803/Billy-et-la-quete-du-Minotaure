#include "Game.hpp"

Game::Game()
{
    // Initialiser le générateur de nombres aléatoires
    srand(static_cast<unsigned int>(time(0)));
}

void Game::Start()
{
    ChooseCharacter();
    // LET'S CODE
}

void Game::ShowState()
{
    std::cout << "----------------------------------------\n";
    std::cout << "Name: " << player->name << "\tLevel: " << player->level << "\tHP: " << player->hp << std::endl;
    std::cout << "Attack: " << player->attack << "\tDefense: " << player->defense << std::endl;
    std::cout << "----------------------------------------\n";
}

void Game::ChooseCharacter()
{
    std::cout << "Choose your character:\n1. Soldier\n2. Mage\n3. Rogue\n";
    // LET'S CODE
}

void Game::EncounterMonster()
{
    // LET'S CODE
        if (player->level == 1) {
            // LET'S CODE
        }
    // LET'S CODE
    std::cout << "A wild " << monster->name << " appears!\n" << std::endl;
}

void Game::Battle()
{
    while (player->IsAlive() && monster->IsAlive()) {
        player->Attack(*monster);
        if (monster->IsAlive()) {
            monster->Attack(*player);
        }
    }
}
