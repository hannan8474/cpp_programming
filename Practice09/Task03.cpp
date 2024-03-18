#include <iostream>
using namespace std;

void reverseString (string &s)
{
    char temp;
    int length = s.length();
    for (int i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
    cout << s << endl;
}

int main()
{
    string s;

    cin >> s;
    reverseString (s);
    return 0;
}