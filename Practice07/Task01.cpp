#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;

int *squareElements (int arr[], int size, int &newArraySize)
{
    newArraySize = size;

    // Initializing Dynamic Array
    int *newArray = new int[newArraySize];

    // Populating the Dynamic Array with squared elements
    for (int i = 0; i < size; i++)
    {
        *(newArray + i) = arr[i] * arr[i];
    }

    cout << "New array size in squareElements Function: " << newArraySize << endl;

    // Returning the starting address of new array
    return newArray;
}

int main ()
{
    int arr[10], newArraySize = 0;
    int *newArray;
    srand (time (0));

    // Input array
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand () % 10 + 1;
    }

    // Output array
    cout << "Unsquared array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calling the function to square the elements of array and copy in newArray. Function is of pointer return type i.e it will take address
    newArray = squareElements (arr, 10, newArraySize);

    cout << "New array size in main: " << newArraySize << endl;

    // New Array with squared elements
    cout << "Squared Array: ";
    for (int i = 0; i < newArraySize; i++)
    {
        cout << *(newArray + i) << " ";
    }
    cout << endl;

    delete[] newArray;
    return 0;
}