#include "iostream"
using namespace std;

int main ()
{
    int numberOfSeconds;

    cout << "Enter number of seconds: ";
    cin >> numberOfSeconds;

    if (numberOfSeconds < 60 && numberOfSeconds >= 0)
    {
        cout << "Seconds: " << numberOfSeconds << endl;
    }
    else if (numberOfSeconds >= 60 && numberOfSeconds < 3600)
    {
        cout << "Minutes: " << numberOfSeconds / 60 << endl << "Seconds: " << numberOfSeconds % 60 << endl;
    }
    else if (numberOfSeconds >= 3600 && numberOfSeconds < 86400)
    {
        cout << "Hours: " << numberOfSeconds / 3600 << endl << "Minutes: " << (numberOfSeconds - 3600) / 60 << endl << "Seconds: " << (numberOfSeconds - 3600) % 60 << endl;
    }
    else if (numberOfSeconds >= 86400)
    {
        cout << "Days: " << numberOfSeconds / 86400 << endl << "Hours: " << (numberOfSeconds - 86400) / 3600 << endl;
        if (numberOfSeconds - 86400 > 3600)
        {
            cout << "Minutes: " << (numberOfSeconds - 86400 - 3600) / 60 << endl << "Seconds: " << (numberOfSeconds - 86400 - 3600) % 60 << endl;
        }
        else 
        {
            cout << "Minutes: " << (numberOfSeconds - 86400) / 60 << endl << "Seconds: " << (numberOfSeconds - 86400) % 60 << endl;
        }
    }
    return 0;
}