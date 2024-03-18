#include "iostream"
#include "fstream"
#include "string"
#include "cctype"
using namespace std;

int main()
{
    float num;
    float  max, x;
    int count = 0, i;
    string c;

    ifstream openFile("temperature.txt");

    while (openFile >> c)
    {
        if (count == 10)    // if count is 10 then it will print max and then move to next value
        {
            cout << max << endl;
            count = 0;
        }

        if (isdigit(c[0]))     // checking if the first character of read string is a digit
        {
            x = stof(c);   // converting string to float

            cout << x << " ";

            if(count == 0)
            {
                max = x;
            }
            else if (x > max)
            {
                max = x;
            }   
            count++;
        }

        else   // if the first index of read string is not a digit then only print it
        {
            cout << c << " ";
        }
    }
    cout << max << endl;
    return 0;
}