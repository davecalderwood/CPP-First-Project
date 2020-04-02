#include <iostream>

bool PlayGame() {
    std::cout << "\nYou are a secret agent breaking into a secure server room.\n";
    std::cout << "You need to enter the correct code to continue...\n\n";

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers to the code.";
    std::cout << "\n+ The numbers add up to: " << CodeSum;
    std::cout << "\n+ The numbers multiply to: " << CodeProduct << std::endl;

    // Player guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check if guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou Win!\n";
        return true;
    }else {
        std::cout << "\nYou Lose!\n";
        return false;
    }
}

int main() {
    while(true) {
        bool bLevelComplete = PlayGame();
        std::cin.clear; // Clears errors
        std::cin.ignore; // Discards buffer
    }
    return 0;
}