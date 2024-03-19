#include <iostream>
using namespace std;

int main()
{
    char str[] = "Certainly! Here's a sentence filled with various punctuation marks: As the clock ticked relentlessly, the tension in the room grew, reaching its peak with an abrupt exclamation 'Time's up!' -and all eyes turned expectantly toward the closed door, which swung open dramatically, revealing a surprise guest: the renowned, enigmatic detective, Sherlock Holmes!";
    int count = 0, j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] <= 'Z' && str[i] >= 'A') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] == ' '))
        {
            count++;
        }
    }

    char *strCopy = new char[count + 1];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] <= 'Z' && str[i] >= 'A') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] == ' '))
        {
            strCopy[j++] = str[i];
        }
    }
    strCopy[j] = 0;

    cout << strCopy << endl;

    delete [] strCopy;
    return 0;
}