#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// Choose a word from a list of words
string chooseWord(const char* File_name)
{
    vector<string> Wordlist;
    ifstream File(File_name);
    string word;
    while (File >> word)
        Wordlist.push_back(word);
    int index = rand() % Wordlist.size();
    return Wordlist[index];
}