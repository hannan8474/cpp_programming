#include "iostream"
using namespace std;

int *dynamicArray (int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(array + i);
    }

    return array;
}

int main ()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int *ptr = dynamicArray (n);

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}