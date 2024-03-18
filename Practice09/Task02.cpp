#include <iostream>
using namespace std;

int stringinit (string &sentence)
{
    int length = 0, i;
    getline (cin, sentence);
    
    for (i = 0; sentence[i] != 0; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    string sentence;
    int length;

    cout << "Enter a string: ";
    length = stringinit (sentence);

    cout << length;
    return 0;
}