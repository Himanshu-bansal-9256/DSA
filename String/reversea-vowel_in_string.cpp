#include <iostream>
#include <vector>
using namespace std;

bool isLower(char c)
{
    c = tolower(c);

    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
string reverseVowels(string s)
{
    int size = s.size();

    int i = 0, j = size - 1;

    while (i < j)
    {
        if (!isLower(s[i]))
        {
            i++;
        }
        else if (!isLower(s[j]))
        {
            j--;
        }
        else
        {
            swap(s[i], s[j]);
            i++, j--;
        }
    }
    return s;
}

int main()
{

    string s;
    getline(cin, s);
    cout << reverseVowels(s);
}