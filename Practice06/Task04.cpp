#include "iostream"
using namespace std;

void ptrEvenOddSum (int *ptrArray, int size, int *evenSum, int *oddSum)
{
    for (int i = 0; i < size; i++)
    {
        if ((*(ptrArray + i) % 2) == 0)
        {
            *evenSum += *(ptrArray + i);
        }
        else 
        {
            *oddSum += *(ptrArray + i);
        }
    }
}

int main ()
{
    int arr[10], evenSum = 0, oddSum = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    ptrEvenOddSum (arr, 10, &evenSum, &oddSum);

    cout << "Odd Sum: " << oddSum << endl;
    cout << "Even Sum: " << evenSum << endl;
    return 0;
}