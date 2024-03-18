#include "iostream"
using namespace std;

void calculateSum (int *num1, int *num2, int *sum)
{
    *sum = *num1 + *num2; 
}

int main ()
{
    int num1, num2, sum;

    cout << "Enter number 1 and number 2" << endl;
    cin >> num1 >> num2;

    calculateSum (&num1, &num2, &sum);

    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}