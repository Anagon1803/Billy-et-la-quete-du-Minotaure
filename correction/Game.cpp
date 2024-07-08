#include "Game.hpp"

Game::Game()
{
    // Initialiser le générateur de nombres aléatoires
    srand(static_cast<unsigned int>(time(0)));
}

void Game::Start()
{
    int monster_dead;
    ChooseCharacter();
    while (player->IsAlive()) {
        ShowState();
        EncounterMonster();
        Battle();
        if (!monster->IsAlive() && monster->name == "Minotaur")
            break;
        if (!monster->IsAlive()) {
            std::cout << "You have defeated the " << monster->name << "!" << std::endl;
            monster_dead += 1;
            player->TakeLevel();
        }
    }
    if (monster->IsAlive())
        std::cout << "You have been defeated. Game Over." << std::endl;
    else
        std::cout << "You have defeated the Minotaur ! Congratulation." << std::endl;
    ShowState();
    std::cout << "You have defeated a total of " << monster_dead << " monsters" << std::endl;
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
    int choice;
    std::cin >> choice;
    std::string name;

    switch (choice) {
        case 1:
            std::cout << "What's your name ?\n";
            std::cin >> name;
            player = std::make_unique<Soldier>(name);
            break;
        case 2:
            std::cout << "What's your name ?\n";
            std::cin >> name;
            player = std::make_unique<Mage>(name);
            break;
        case 3:
            std::cout << "What's your name ?\n";
            std::cin >> name;
            player = std::make_unique<Rogue>(name);
            break;
        default:
            std::cout << "Invalid choice. Defaulting to Soldier." << std::endl;
            player = std::make_unique<Soldier>("Player Soldier");
            break;
    }
}

void Game::EncounterMonster()
{
    bool flag = false;
    int choice;

    while (flag != true) {
        choice = rand() % 3;
        flag = true;

        if (player->level == 1)
            choice = 0;
        if (player->level < 5 && choice == 2)
            flag = false;
    };

    switch (choice) {
        case 0:
            monster = std::make_unique<SoldierSlime>();
            break;
        case 1:
            monster = std::make_unique<RedMage>();
            break;
        case 2:
            monster = std::make_unique<Minotaur>();
            break;
    }
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
