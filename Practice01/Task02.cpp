#include "iostream"
using namespace std;

int main ()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << b << " " << a << endl;
    }
    else if (a < b) 
    {
        cout << a << " " << b << endl;
    }
    else 
    {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}