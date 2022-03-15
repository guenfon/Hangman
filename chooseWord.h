#include <iostream>
#include <string>

using namespace std;

const string Wordlist[] = {
    "apple", "banana", "orange", "pear", "grape", "strawberry", "kiwi", "lemon", "lime", "watermelon",
    "cherry", "mango", "apricot", "avocado", "blueberry", "blackberry", "cranberry", "clementine", "fig",
    "gooseberry", "raspberry", "blackcurrant", "boysenberry", "cantaloupe", "clementine", "elderberry",
    "grapefruit", "honeydew", "jackfruit", "jambul", "jujube", "kiwifruit", "kumquat", "lemon", "lime",
    "loquat", "lychee", "mandarine", "mango", "nectarine", "orange", "papaya", "passionfruit", "peach",
    "pear", "persimmon", "pineapple", "plum", "pomegranate", "quince", "raspberry", "rambutan", "rambutan",
    "raspberry", "satsuma", "starfruit", "strawberry", "tangerine", "tomato", "ugli fruit", "watermelon",
    "xigua", "yuzu", "zucchini"
};

// Choose a word from a list of words
string chooseWord()
{
    int index = rand() % 10;
    return Wordlist[index];
}