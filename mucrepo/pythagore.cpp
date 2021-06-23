#include <iostream>

int main() {
    double ab, ac, bcc;

    std::cout << "Veuillez entrer les valeurs pour les deux côtés formant l'angle droit: \n";
    std::cout << "--> côté 1: ";
    std::cin >> ab;
    std::cout << "--> côté 2: ";
    std::cin >> ac;

    bcc = (ac*ac) + (ab*ab);

    std::cout << "Le carré de l'hypoténuse est égal à : " << bcc << "\n";




}