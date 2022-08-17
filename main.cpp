#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int bord_x, bord_y;
    std::cout << "Enter the borders of the picture: " << std::endl;
    std::cout << "Enter height: ";
    std::cin >> bord_x;
    std::cout << "\nEnter width: ";
    std::cin >> bord_y;
    std::ofstream picture;
    picture.open("P:\\Pic.txt", std::ios::app);
    picture << "";
    for (int i = 0; i < bord_x; i++) {
        for (int l = 0; l < bord_y; l++) {
            picture << rand() % 2;
        }
        picture << "\n";
    }
    return 0;
}
