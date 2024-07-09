---
title:      Billy et la quête du Minotaure
subtitle:   Petit jeu textuel
language:   C++
module:     Cobra
author:     Anaëlle URBON
version:    1.0
branding:   Diversity
---

\newpage
# Introduction

## Lore

Dans le paisible village de Lumina vivait un jeune et courageux garçon squelette nommé Billy. Connu pour sa bravoure et sa curiosité, Billy était le fils d'un ancien héros qui avait autrefois sauvé le royaume des ténèbres. Un jour, alors qu'il se promenait dans son village, il vit une affiche sur le mur de la guilde. C'était un contrat de chasse qui promettait une belle somme à quiconque tuerait le Minotaure qui menaçait la vallée. Notre jeune villageois se sentit submergé par la détermination de sauver sa terre natale et de gagner beaucoup d'argent. Aidez Billy dans sa quête !

![cat-100](asset/stone%20minotaurus.png "Le Minotaure de la vallée"){width=100%}
\newpage

## Consignes

::: info
Pour ce projet, une partie du code va vous être donnée (pas de stress). Vous devrez recoder certaines des fonctions qui ont été piétinées par le Minotaure. Suivez donc bien les différentes étapes pour que tout fonctionne correctement à la fin.
:::

::: warning
Il n'est pas nécessaire de supprimer ou de créer de nouveaux fichiers.
:::

::: note
En cas de question, pensez à demander de l’aide à votre voisin de droite, de gauche, de devant et/ou de derrière. Puis demandez enfin à un Cobra si vous êtes toujours bloqué(e).

**Il n'y a aucune compétition donc n'hésitez pas à vous entraider.**
:::

::: tip
Vous avez tout à fait le droit d’utiliser Internet pour vous renseigner.
:::

::: tip
Pour tester le projet, executez le fichier `run.sh` dans votre Terminal.

::: terminal
./run.sh
Compilation réussie !
:::

Puis vous pouvez executer le fichier `game`.
Le fichier `game_correction` existe pour vous montrer le résultat final.
:::
\newpage

## Introduction rapide au C++

Le langage C++ est un langage de programmation qui permet de donner des instructions à un ordinateur pour réaliser des tâches spécifiques. Imaginez que vous donnez des ordres à un robot pour qu'il fasse ce que vous voulez, comme allumer la lumière, jouer de la musique ou résoudre un problème de mathématiques. Le C++ est un moyen de donner ces ordres.

### Langage de Programmation

C++ est un langage utilisé par les développeurs pour écrire des programmes. Un programme est une suite d'instructions que l'ordinateur exécute pour réaliser une tâche.

### Syntaxe

Comme chaque langue a sa propre grammaire, le C++ a sa propre syntaxe, c'est-à-dire des règles spécifiques pour écrire du code. Par exemple, chaque instruction se termine par un point-virgule (;).

### Variables

Les variables sont comme des boîtes où l'on peut stocker des valeurs (nombres, textes, etc.) que le programme utilisera. Par exemple, `int age = 17;` signifie que l'on crée une boîte appelée "age" qui contient le nombre 17.

``` C++
int age = 17;
float taille = 1.70;
char grade = 'B';
char *nom = "Billy";
```

### Fonctions

Les fonctions sont des blocs de code qui réalisent une tâche particulière. Par exemple, il peut y avoir une fonction pour ajouter deux nombres ou pour afficher un message à l'écran. On les appelle quand on a besoin d'effectuer cette tâche.

``` C++
int addition(int a, int b)
{
    return (a + b);
}
```

### Objets et Classes

C++ est un langage orienté objet, ce qui signifie qu'il permet de créer des objets. Une classe est comme un modèle ou une recette, et un objet est une instance de cette classe. Par exemple, si vous avez une classe "Voiture", vous pouvez créer des objets comme "maVoiture" ou "taVoiture", chacun avec ses propres caractéristiques (couleur, marque, etc.).

``` C++
class Voiture {
    public:
        std::string marque;
        std::string modele;
        int annee_fabrication;
};

Voiture maVoiture(marque, modele, annee_fabrication);
Voiture taVoiture(marque, modele, annee_fabrication);
```

### Boucles

Les boucles permettent de répéter des instructions plusieurs fois. Par exemple, si vous voulez afficher "Bonjour" dix fois, vous utilisez une boucle pour éviter d'écrire dix fois la même instruction.

``` C++
for (int i; i < 10; i++) {
    std::cout << "Bonjour" << std::endl;
}
```

<br>
Le C++ est un langage puissant qui permet de créer des logiciels allant des jeux vidéo aux systèmes d'exploitation. C'est un excellent langage pour commencer à apprendre la programmation car il enseigne des concepts fondamentaux utilisés dans de nombreux autres langages.
\newpage

# LET'S CODE

## Choisis ta classe, Billy !

Avant de partir à la chasse au Minotaure et aux autres monstres, Billy doit prendre une décision importante : devenir un **Soldier** comme sa mère, un **Mage** comme son père ou un **Rogue** comme son grand frère.

Pour l'aider, allez dans le fichier `Game.cpp` à la fonction `ChooseCharacter`. Cette fonction doit permettre de demander une réponse à l'utilisateur et de créer un `Soldier`, un `Mage` ou un `Rogue` selon la réponse donnée. En bonus, vous pouvez demander le nom de l'utilisateur pour personaliser le personnage.

``` C++
void Game::ChooseCharacter()
{
    std::cout << "Choose your character:\n1. Soldier\n2. Mage\n3. Rogue\n";
    // LET'S CODE
}
```

::: tip
Renseignez-vous sur les éléments suivants pour vous aider :

- `std::cin`
- l'instruction `switch`
- `std::string`

Pour créer/initialiser un Soldat :
``` C++
player = std::make_unique<Soldier>("Billy");
```
:::

## Attention aux monstres !

Billy, maintenant armé, part pour battre le Minotaure. Mais sur son chemin, il va rencontrer de multiples dangers ! Parmi la faune locale, deux autres monstres peuvent surgir de nulle part : un **SoldierSlime** et un **RedMage**.

Dans le même fichier (`Game.cpp`), allez à la fonction `EncounterMonster`. Cette fonction doit générer un nombre aléatoire entre 0, 1 et 2 et créer un monstre en fonction de ce nombre. Attention à ne pas faire apparaître le Minotaure quand Billy est à un niveau inférieur à 6. Il risque de se faire piétiner sur le coup !

``` C++
void Game::EncounterMonster()
{
    // LET'S CODE
        if (player->level == 1) {
            // LET'S CODE
        }
    // LET'S CODE
    std::cout << "A wild " << monster->name << " appears!\n" << std::endl;
}
```

::: tip
Renseignez-vous sur les éléments suivants pour vous aider :
- `rand()`
- les boucles `while`

Pour créer/initialiser un Minotaure :
``` C++
monster = std::make_unique<Minotaur>();
```
:::
\newpage

::: info
A ce stade de l'aventure, Vous pouvez tester votre programme avec la fonction suivante :

Dans `Game.cpp`, modifier la fonction `Start` comme ceci.
``` C++
void Game::Start()
{
    ChooseCharacter();
    ShowState();
    EncounterMonster();
}
```

::: terminal
./game
Choose your character:
1. Soldier
2. Mage
3. Rogue
1
What's your name ?
Billy
----------------------------------------
Name: Billy     Level: 1        HP: 100
Attack: 15      Defense: 10
----------------------------------------
A wild Soldier Slime appears!
:::
:::

## Aïe ! ça fait mal !

Billy se retrouve face à un monstre. Objectif ? Lui faire des dégâts ! Mais Billy ne sait pas comment faire. Vite ! Direction le fichier `ACharacter.cpp` dans la fonction `TakeDamage`. Cette fonction doit modifier la variable `hp` en fonction des dégâts subis. Attention, chaque monstre possède de la défense.

``` C++
void ACharacter::TakeDamage(int damage)
{
    int finalDamage;
    // LET'S CODE
    std::cout << name << " takes " << finalDamage << " damage and has " << hp << " HP left.\n" << std::endl;
}
```

::: tip
Dans le fichier `ACharacter.hpp`, vous pouvez voir la classe `ACharacter` avec toutes les variables dont vous avez accès.

Attention, ce fichier ne doit pas être modifié.
:::

## Je ressens la puissance m'envahir !

À force de tuer des monstres, Billy gagne en niveaux. À la fin de chaque combat, il y aura un choix à faire. Voici un petit exemple :

Billy vient de battre un Mage Rouge. Il gagne un niveau et passe donc au niveau 3.
Si Billy décide d'augmenter son attaque, il gagnera 3 points en *attack* (car il est niveau 3).
Si Billy décide d'augmenter sa défense, il gagnera 3 points en *defense*.
Et si Billy décide de se soigner, il gagnera 50% de ses *hp* actuels (peu importe le niveau).

Toujours dans le fichier `ACharacter.cpp`, modifiez la fonction `TakeLevel`.

``` C++
void ACharacter::TakeLevel()
{
    level += 1;
    std::cout << name << " gains a level and is now at level " << level << ". Choose to increase your :\n1. Attack\n2. Defense\n3. Heal\n";
    // LET'S CODE
}
```

::: tip
Renseignez-vous sur les éléments suivants pour vous aider :
- `std::cin`
- l'instruction `switch`
:::
\newpage

# Conclusion

Bravo à vous ! Vous avez fini ! Pour pouvoir envoyer Billy à l'aventure une bonne fois pour toutes, direction le fichier `Game.cpp` une dernière fois dans la fonction `Start` et copiez simplement le code suivant.

``` C++
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
```

La chasse est maintenant ouverte ! À vous de jouer pour que Billy batte le Minotaure et sauve son village. Les habitants le soutiennent et souhaitent le revoir victorieux.

Merci à vous d'avoir suivi les aventures de Billy et je vous dis peut-être à bientôt pour de nouvelles péripéties.

![cat-100](asset/knight%20slime.png "Slime Chevalier"){width=100%}

# Annexes
