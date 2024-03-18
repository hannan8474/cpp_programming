#include "iostream"
#include "string"
using namespace std;

int main ()
{
    string str[5];
    string str_c = "";
    int i;

    for (i = 0; i < 5; i++)
    {
        getline (cin, str[i]);
    }

    for (i = 0; i < 5; i++)
    {
        str_c = str_c + str[i] + " ";
    }

    cout << str_c << endl;
    return 0;
}