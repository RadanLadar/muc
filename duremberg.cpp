#include <iostream>
#include <cmath>

int main() {
    // define variables
    double height, weight, bmi, bodyfat;
    int years;
    bool isMan;
    char hf;


    /* REMINDER:
    BMI calculuation is 
    bmi = x/ y² 
    where x = weight (kg)
    and y = height (m)
    (1,2 * BMI) + (0,23 * âge) - (10,8 * sexe (femme = 0, homme =1)) - 5,4
    
    */

    // get usr input
    std::cout << "Taille (en cm): ";
    std::cin >> height;

    std::cout << "Poids (en kg): ";
    std::cin >> weight;

    std::cout << "Age: ";
    std::cin >> years;

    std::cout << "Sexe (H/F)";
    std::cin >> hf;

    if( hf == 'h'){
        isMan = true;
    } else {
        isMan = false;
    }



    // calculation
    height = height / 100; // convert in cm
    bmi = weight / (height * height); // get bmi value

    if(isMan == true){
        bodyfat = (1.2*bmi)+(0.23*years)-16.2;
    } else {
        bodyfat = (1.2*bmi)+(0.23*years)-5.4;
    }

    // display results
    std::cout << "According to the provided informations, your bodyfat is around " << round(bodyfat * 10 ) / 10 <<"% (Duremberg)\n";
    std::cout << "\n";
    std::cout << "--------------------------Interpretation-----------------------\n";
    // interpretation
    if(isMan == true && bodyfat < 15){
        std::cout << "Your body fat is too low";
    } else if(isMan == true && bodyfat > 20){
        std::cout << "Your body fat is too high";
    } else if(isMan != true && bodyfat < 25){
        std::cout << "Your body fat is too low";
    } else if(isMan != true && bodyfat > 30){
        std::cout << "Your body fat is too high";       
    } else {
        std::cout << "Your body fat is quite good"; 
    }
    std::cout << "\n";
    std::cout << "\n";


    return 0;
}