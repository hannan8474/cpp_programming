#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

int *pairWiseSum (int arr[], int size, int &newArraySize)
{
    int j = 0;
    int *newArray = new int[newArraySize];

    for (int i = 0; i < size; i += 2)
    {
        *(newArray + j) = *(arr + i) + *(arr + (i + 1));
        j++;
    }

    if (size % 2 != 0)
    {
        *(newArray + (newArraySize - 1)) = *(arr + (size - 1));
    }

    return newArray;
}

int main ()
{
    int *arr, *newArr;
    int size, newArraySize = 0;

    cout << "Size of original array: ";
    cin >> size;

    arr = new int[size];

    if (size % 2 == 0)
    {
        newArraySize = size / 2;
    }
    else 
    {
        newArraySize = (size / 2) + 1;
    }

    srand (time (0));
    // Input array
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand () % 10 + 1;
    }

    // Output array
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    newArr = pairWiseSum (arr, size, newArraySize);

    cout << "Array with pair wise sum: ";
    for (int i = 0; i < newArraySize; i++)
    {
        cout << *(newArr + i) << " ";
    }

    delete [] newArr;
    delete [] arr;
    return 0;
}