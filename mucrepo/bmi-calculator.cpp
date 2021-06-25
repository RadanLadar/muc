#include <iostream>
#include <cmath>

int main() {
    // define variables
    double height, weight, bmi, result;

    /* REMINDER:
    BMI calculuation is 
    bmi = x/ y² 
    where x = weight (kg)
    and y = height (m)*/

    std::cout << "**********************************************************************************\n";
    std::cout << "#                                                                                #\n";
    std::cout << "#                               BMI CALCULATOR                                   #\n";
    std::cout << "#                                                                                #\n";
    std::cout << "**********************************************************************************\n";
    std::cout <<  "\n\n";

    // get usr input
    std::cout << "Nous allons appliquer la formule de calcul d'IMC, merci d'indiquer: \n\n";
    std::cout << "--> Taille (en cm): ";
    std::cin >> height;

    std::cout << "--> Poids (en kg): ";
    std::cin >> weight;

    // calculation
    height = height / 100; // convert in cm
    bmi = weight / (height * height);
    result = round(bmi * 10 ) / 10;
    std::cout << "\n";
    // display result
    std::cout << "**********************************************************************************\n";
    std::cout << "#                                 L'imc est de                                   #\n";
    std::cout << "#                                    "<< result << "                                        #\n";
    std::cout << "#                      selon les informations fournies.                          #\n";
    std::cout << "**********************************************************************************\n";
    std::cout << "\n"; 
    std::cout << "----------------------------------------------------------------------------------\n\n";
    std::cout << "--> Interprétation de l'OMS \n                          -----> ";
    

    if (bmi > 40) {
        std::cout << "Obésité morbide \n";
    } else if (bmi > 35) {
        std::cout << "Obésité classe 2 \n";
    } else if (bmi > 30) {
        std::cout << "Obésité classe 1 \n";
    } else if (bmi > 25 ) {
        std::cout << "Surpoids \n";
    } else if (bmi > 18.5 ) {
        std::cout << "Corpulence normale \n";
    } else if (bmi > 16.5 ) {
        std::cout << "Maigreure \n";
    } else {
        std::cout << "Maigreure extrême \n";
    }
    std::cout << "\n"; 

    return 0;
}