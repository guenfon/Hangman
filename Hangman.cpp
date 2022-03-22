#include <iostream>
#include <string>
#include <ctime>
#include "chooseWord.h"
#include "renderGame.h"

using namespace std;

const char DATA_FILE[] = "Word_list.txt";
char readAGuess();
bool contains(const string secretWord, char guess);
void update(string &guessedWord, const string &secretWord, char guess);

int main()
{
    srand(time(NULL));
    string secretWord = chooseWord(DATA_FILE);
    string guessedWord = string(secretWord.length(), '-');
    string oldGuessedWord = "";
    int badGuessCount = 0;
    do 
    {
        renderGame(guessedWord, badGuessCount, oldGuessedWord);
        char guess = readAGuess();
        if (contains(secretWord, guess))
            update(guessedWord, secretWord, guess);
        else ++badGuessCount;
        oldGuessedWord += guess;
    } while (badGuessCount < 7 && secretWord != guessedWord);
    renderGame(guessedWord, badGuessCount, oldGuessedWord);
    clearScreen();
    bool win = secretWord == guessedWord;
    displayResult(win, secretWord); 
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
bool contains(const string secretWord, char guess)
{
    int len = secretWord.length();
    for (int i = 0; i < len; ++i)
    {
        if (secretWord[i] == guess) return true;
    }
    return false;
}

// Update the guessed word
void update(string &guessedWord, const string &secretWord, char guess)
{
    int len = secretWord.length();
    for (int i = 0; i < len; ++i)
    {
        if (secretWord[i] == guess) guessedWord[i] = guess;
    }
}