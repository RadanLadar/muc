#include <iostream>
#include <stdlib.h>

int main() {

    int choice;

    std::cout << "**********************************************************************************\n";
    std::cout << "#                                                                                #\n";
    std::cout << "#                            MEGAUSEFULLCOMPUTER                                 #\n";
    std::cout << "#                                                                                #\n";
    std::cout << "**********************************************************************************\n";
    std::cout << "\n";
    std::cout << "            -- Que voulez-vous faire? --                             \n";
    std::cout << "                                                                     \n";
    std::cout << "                 1) Calculer un IMC\n";
    std::cout << "                 2) Savoir si une année est bisextile\n";
    std::cout << "                 3) Utiliser la loi d'ohm\n";
    std::cout << "                 4) Connaitre le carré de l'hypothénuse\n";
    std::cout << "                 5) Calculer la masse graisseuse\n";
    std::cout << "                                                                  \n";
    std::cout << "----------------------------------------------------------------------------------\n";
    std::cout << "--> Votre choix (1, 2, 3, 4 ou 5): ";
    std::cin >> choice;

    switch(choice){
        case 1:
            std::cout << "Starting BMI Calulator...\n";
            std::cout << "\n";
            std::cout << "\n";
            system("./bmicalc");
        break;
        case 2:
            std::cout << "Starting Leap finder...\n";
            std::cout << "\n";
            std::cout << "\n";
            system("./leap");
        break;
        case 3:
            std::cout << "Starting OhmLaw Computer...\n";
            std::cout << "\n";
            std::cout << "\n";
            system("./ohm");
        break;
        case 4:
            std::cout << "Starting PythThe...\n";
            std::cout << "\n";
            std::cout << "\n";
            system("./pythagore");
        break;
        case 5:
            std::cout << "Starting Duremberg\n";
            std::cout << "\n";
            std::cout << "\n";
            system("./duremberg");

        default:
        std::cout << "Tapez une valeur valide\n";       
    }

}