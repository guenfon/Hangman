#include <iostream>
#include <string>
#include <windows.h>

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

const static string figure_lost[] = {
 " ------------+ \n"
 " |           / \n"
 " |          O \n"
 " |         /|\\ \n"
 " |         / \\ \n"
 " |              \n"
 " ----- \n" ,

 " ------------+ \n"
 " |           | \n"
 " |           O \n"
 " |          /|\\ \n"
 " |          / \\ \n"
 " |               \n"
 " ----- \n",

  " ------------+ \n"
 " |            \\ \n"
 " |             O \n"
 " |            /|\\ \n"
 " |            / \\ \n"
 " |                 \n"
 " ----- \n",

 " ------------+ \n"
 " |           | \n"
 " |           O \n"
 " |          /|\\ \n"
 " |          / \\ \n"
 " |               \n"
 " ----- \n",
};

static string figure_win[] = {
 "             O   \n"
 "            /|\\ \n"
 "            | |  \n",

 "             O   \n"
 "            /|\\ \n"
 "            / \\ \n",

 "           __O__ \n"
 "             |   \n"
 "            / \\ \n",

 "           \\O/  \n"
 "             |   \n"
 "            / \\ \n",

 "           __O__ \n"
 "             |   \n"
 "            / \\ \n",

 "             O   \n"
 "            /|\\ \n"
 "            / \\ \n" ,

 "           __O__ \n"
 "             |   \n"
 "            / \\ \n" ,

 "            O   \n"
 "            /|\\ \n"
 "            / \\ \n" ,

 "             O   \n"
 "            /|\\ \n"
 "            / \\ \n" ,

 "              O   \n"
 "            /|\\ \n"
 "            / \\ \n" ,

 "             O   \n"
 "            /|\\ \n"
 "            / \\ \n" ,
};

//clear screen
void clearScreen() 
{
    #ifndef _WIN32
        system("clear");
    #else
        system("cls");
    #endif
}

// Render the game Hangman
void renderGame(const string guessedWord, int badGuessCount, string oldGusseword)
{
    clearScreen();
    cout << FIGURE[badGuessCount];
    cout << "Secret word: " << guessedWord << endl;
    cout << "Previous guesses: " << oldGusseword << endl;
}

// Read a guess from the user win or lose
void displayResult(bool win, const string secretWord)
{
    if (win) 
    {
        int i = 0;
        int n = 11*3;
        while (n--)
        {
            clearScreen();
            if (i >= 11) i = 0;
            cout << "Congratulations! You win!" << endl;
            cout << figure_win[i];
            ++i;
            //sleep
            Sleep(500);
        }
    }
    else 
    {
        int i = 0;
        int n = 4*3;
        while (n--)
        {
            clearScreen();
            if (i >= 4) i = 0;
            cout << "You lose! The secret word was: " << secretWord << endl;
            cout << figure_lost[i];
            ++i;
            //sleep
            Sleep(500);
        }
    }
}