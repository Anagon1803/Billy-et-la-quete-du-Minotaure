#!/bin/bash

# Commande de compilation
g++ -o game *.cpp

# Vérifier si la compilation a réussi
if [ $? -eq 0 ]; then
    echo "Compilation réussie !"
else
    echo "Erreur lors de la compilation."
fi
