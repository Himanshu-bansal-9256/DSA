#include <iostream>
#include <vector>
using namespace std;

bool checkPangram(string sentence)
{
    vector<bool> alphabet(26, 0);

    for (int i = 0; i < sentence.size(); i++)
    {
            int index = sentence[i] - 'a';
            alphabet[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
            return false;
    }

    return true;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";

    if (checkPangram(sentence))
        cout << "Pangram" << endl;
    else
        cout << "Not a Pangram" << endl;
}
