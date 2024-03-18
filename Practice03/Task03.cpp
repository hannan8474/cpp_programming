#include "iostream"
#include "string"
using namespace std;

int main ()
{
    string str;
    int i, count;

    cout << "Enter string: " << endl;
    getline (cin, str);

    count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')  count++;
    }
    cout << "a: " << count << endl;
    
    count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'e')  count++;
    }
    cout << "e: " << count << endl;
    
    count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'i')  count++;
    }
    cout << "i: " << count << endl;
    
    count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'o')  count++;
    }
    cout << "o: " << count << endl;
    
    count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'u')  count++;
    }
    cout << "u: " << count << endl;
    return 0;
}