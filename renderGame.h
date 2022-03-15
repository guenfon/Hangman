#include <iostream>
#include <string>

using namespace std;

const string FIGURE[] = {
    " ------------- \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",

 " ------------- \n"
 " |           | \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |             \n"
 " |             \n"
 " |             \n"
 " ----- \n",

 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |           | \n"
 " |            \n"
 " |            \n"
 " ----- \n",
 
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |          /| \n"
 " |             \n"
 " |             \n"
 " ----- \n",
 
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |          /|\\ \n"
 " |                \n"
 " |                \n"
 " ----- \n",

 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |          /|\\ \n"
 " |          /   \n"
 " |            \n"
 " ----- \n",
    
 " ------------- \n"
 " |           | \n"
 " |           O \n"
 " |          /|\\ \n"
 " |          / \\ \n"
 " |               \n"
 " ----- \n"
};

//clear screen
void clearScreen() 
{
    
}

// Render the game Hangman
void renderGame(string guessedWord, int badGuessCount)
{
    cout << FIGURE[badGuessCount] << "\n";
    cout << "The word is: " << guessedWord << endl;
    cout << "You have " << badGuessCount << " bad guesses left." << endl; 
}