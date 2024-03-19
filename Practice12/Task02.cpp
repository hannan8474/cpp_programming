#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
    char str[] = "Wheat25Sugar5Tea2Salt1Oil3Rice5";
    int flag = 0, space = 0, length = 0, j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            if (flag == 0)
            {
                space += 2;
            }
            flag = 1;
        }
        else 
        {
            flag = 0;
        }
    }

    length = strlen(str) + space;
    char *strCopy = new char[length];
    flag = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            if (flag == 0)
            {
                strCopy[j++] = ' ';
                strCopy[j++] = str[i];
            }
            else
            {
                strCopy[j++] = str[i];
            }
            flag = 1;
        }
        else 
        {
            if (flag == 1)
            {
                strCopy[j++] = ' ';
            }
            strCopy[j++] = str[i];
            flag = 0;
        }
    }

    cout << strCopy << endl;
    delete [] strCopy;
    return 0;
}