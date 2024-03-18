#include "iostream"
using namespace std;

void ptrArray (double *ptrArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Address: " << ptrArray + i << " " << "Content: " << *(ptrArray + i) << endl;
    }
}

int main ()
{
    double arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    ptrArray(arr, 10);
    return 0;
}