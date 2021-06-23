#include <iostream>

int main() {
    int year;
    std::cout << "Entrez une année: \n";
    std::cin >> year;

    if(year < 1582 || year > 9999) {
        std::cout << "Entrez une année comprise dans le calendrier Grégorien.\n";
    } else if(year%4 == 0){
        if(year%100 ==0 && year%400 !=0){
            std::cout << year << " n'est pas une année bisextile.\n";
        } else {
            std::cout << year << " est une année bisextile. \n";
        }
    } else {
        std::cout << year << " n'est pas une année bisextile. \n";
    }

}