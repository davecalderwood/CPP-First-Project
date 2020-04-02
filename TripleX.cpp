#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) {
    std::cout << "\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room.\nYou need to enter the correct code to continue...\n\n";
}
bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\nGood work, now on to the next one!\n";
        return true;
    }else {
        std::cout << "\nCareful agent, that's the wrong code... Try again!\n";
        return false;
    }
}

int main() {
    srand(time(NULL));
    
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears errors
        std::cin.ignore(); // Discards buffer

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "Great work, you have broken in!";
    return 0;
}