#include <iostream>
#include "cctype"
using namespace std;

int main()
{
    string sentence;

    cin >> sentence;

    cout << sentence[0];

    for (int i = 1; sentence[i] != 0; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            cout << " ";
            sentence[i] = tolower(sentence[i]);
            cout << sentence[i];
        }
        else 
        {
            cout << sentence[i];
        }
    }
    return 0;
}
