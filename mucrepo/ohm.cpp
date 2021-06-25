#include <iostream>
#include <string>

int main() {

    /*
    Loi d'ohm 
    U=RxI
    R=U/I
    I=U/R   
    */
    std::string variable1, variable2, resultname;
    int choice;
    double input1, input2, result;

    std::cout << "**********************************************************************************\n";
    std::cout << "#                                                                                #\n";
    std::cout << "#                             OHM LAW COMPUTER                                   #\n";
    std::cout << "#                      If you'd rather not use your brain...                     #\n";
    std::cout << "#                                                                                #\n";
    std::cout << "**********************************************************************************\n\n";    

// Notice
    std::cout << "Quelle valeur recherchez-vous ?\n";
    std::cout << "-------------------------------\n";
    std::cout << "1) La tension aux bornes de la résistance\n";
    std::cout << "2) La valeur de la résistance\n";
    std::cout << "3) L’intensité du courant qui circule à travers la résistance\n";
    std::cout << "-------------------------------\n";

// Formula selection
    std::cout << "---> Votre choix: ";
    std::cin >> choice;
    std::cout << "\n";

// Selection processing
    switch(choice){
        case 1:
            variable1 = "résistance";
            variable2 = "intensité";
            resultname = "tension";
                break;
        case 2:
            variable1 = "tension";
            variable2 = "intensité";
            resultname = "résistance";
                break;
        case 3:
            variable1 = "tension";
            variable2 = "résistance";
            resultname = "intensité";
                break;
        default: 
            std::cout << "Veuillez entrer une valeur correcte";
    }

    std::cout << "Veuillez entrer les valeurs pour " << variable1 << " et pour " << variable2 << "\n";
    std::cout << "--> " << variable1 << ": ";
    std::cin >> input1;
    std::cout << "--> " << variable2 << ": ";
    std::cin >> input2;

    // Computing
    if (choice == 1 ) {
        result = input1 * input2;
    } else {
        result = input1 / input2;
    }

    std::cout << "-------------------------------\n";   
    std::cout << "La valeur de " << resultname << " : " << result << "\n";
}