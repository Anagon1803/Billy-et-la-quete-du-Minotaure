#!/bin/bash

# Commande de compilation
g++ -o game_correction *.cpp

# Vérifier si la compilation a réussi
if [ $? -eq 0 ]; then
    echo "Compilation réussie !"
else
    echo "Erreur lors de la compilation."
fi
