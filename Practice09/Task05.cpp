#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
    int i, flag = 0;
    string arr[10];
    string nameFind;

    for (int i = 0; i < 10; i++)
    {
        getline(cin, arr[i]);
    }

    cout << "Enter a name to find: ";
    getline(cin, nameFind);

    for (i = 0; i < 10; i++)
    {
        if (arr[i].find(nameFind) != string::npos)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}