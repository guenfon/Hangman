#include <iostream>
#include <string>
#include <ctime>
#include "chooseWord.h"
#include "renderGame.h"

using namespace std;

char readAGuess();
bool contains(string secretWord, char guess);
void update(string &guessedWord, string &secretWord, char guess);

int main()
{
    srand(time(0));
    string secretWord = chooseWord();
    string guessedWord = string(secretWord.length(), '-');
    int badGuessCount = 0;
    do 
    {
        renderGame(guessedWord, badGuessCount);
        char guess = readAGuess();
        if (contains(secretWord, guess))
            update(guessedWord, secretWord, guess);
        else ++badGuessCount;
    } while (badGuessCount < 7 && secretWord != guessedWord);
    renderGame(guessedWord, badGuessCount);
    if (badGuessCount < 7) cout << "Congratulations! You win!";
    else cout << "You lost. The correct word is " << secretWord; 
    return 0;
}

// Read a guess from the user
char readAGuess()
{
    char guess;
    cout << "Enter a guess: ";
    cin >> guess;
    return guess;
}

// Check if the secret word contains the guess
bool contains(string secretWord, char guess)
{
    int len = secretWord.length();
    for (int i = 0; i < len; ++i)
    {
        if (secretWord[i] == guess) return true;
    }
    return false;
}

// Update the guessed word
void update(string &guessedWord, string &secretWord, char guess)
{
    int len = secretWord.length();
    for (int i = 0; i < len; ++i)
    {
        if (secretWord[i] == guess) guessedWord[i] = guess;
    }
}