#include "iostream"
#include "string"
#include "cctype"
using namespace std;

void reverseCase (string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            str[i] = str[i] ^ 32;
        }
    }
    cout << str << endl;
}

int main ()
{
    string str;

    getline (cin, str);


    reverseCase (str);
    return 0;
}