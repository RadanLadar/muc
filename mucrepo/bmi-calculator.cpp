#include <iostream>
#include <cmath>

int main() {
    // define variables
    double height;
    double weight;
    double bmi;

    /* REMINDER:
    BMI calculuation is 
    bmi = x/ y² 
    where x = weight (kg)
    and y = height (m)*/

    // get usr input
    std::cout << "Taille (en cm): ";
    std::cin >> height;

    std::cout << "Poids (en kg): ";
    std::cin >> weight;

    // calculation
    height = height / 100; // convert in cm
    bmi = weight / (height * height);

    std::cout << "L'imc est de " << round(bmi * 10 ) / 10 << " selon les informations fournies.\n"; // display result
    std::cout << "---------------------------------------------------\n";
    std::cout << "Interprétation de l'OMS -> ";

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

    return 0;
}