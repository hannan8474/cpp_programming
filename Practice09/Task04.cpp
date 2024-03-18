#include <iostream>
#include "string"
using namespace std;

int countWords (string& str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    getline (cin, s);

    int wordsCount = countWords(s);

    cout << wordsCount + 1 << endl;
    return 0;
}