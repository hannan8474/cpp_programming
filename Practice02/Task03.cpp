#include "iostream"
using namespace std;

int main ()
{
    int arr[4][4], i, j;

    cout << "Enter array for transpose:" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> arr[i][j];   
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}