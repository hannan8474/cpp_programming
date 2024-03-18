#include "iostream"
#include "string"
#include <cstring>
using namespace std;

int main()
{
    string str, str_c;
    int i, length, count = 0, j, flag = 0;
    char temp;

    getline(cin, str);
    str_c = str.c_str();

    length = str.length();

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    for (i = 0; i < length; i++)
    {
        if (str_c[i] == ' ' || str_c[i] == '.' || str_c[i] == ',' || str_c[i] == '!')
        {
            continue;
        }
        for (j = count; j < length; j++)
        {
            if (str[j] == ' ' || str[j] == '.' || str[j] == ',' || str[j] == '!')
            {
                continue;
            }
            if (str_c[i] == str[j] - 32 || str_c[i] == str[j] + 32 || str_c[i] == str[j])
            {
                count = j + 1;
                break;
            }
        }
        if (j == length)
            break;
    }

    if (i != length)
    {
        cout << "String is not palindrome" << endl;
    }
    else
    {
        cout << "String is palindrome" << endl;
    }

    return 0;
}