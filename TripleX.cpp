#include <iostream>

int main() {
    std::cout << "You are a secret agent breaking into a secure server room.";
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to continue...";
    std::cout << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers to the code." << std::endl;
    std::cout << "+ The numbers add up to: " << CodeSum << std::endl;
    std::cout << "+ The numbers multiply to: " << CodeProduct << std::endl;

    return 0;
}