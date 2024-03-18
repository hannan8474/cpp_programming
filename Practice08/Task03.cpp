#include "iostream"
using namespace std;

void outputArray (int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

void sortArray (int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

float calculateAverage (int *array, int size)
{
    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        sum += *(array + i);
    }

    return (float) sum / size;
}

int main ()
{
    int numOfStudents;

    cout << "Enter the number of students: ";
    cin >> numOfStudents;

    int *array = new int[numOfStudents];

    for (int i = 0; i < numOfStudents; i++)
    {
        cin >> *(array + i);
    }

    outputArray (array, numOfStudents);

    sortArray (array, numOfStudents);

    cout << "Sorted array: ";
    outputArray (array, numOfStudents);

    float avg = calculateAverage (array, numOfStudents);
    cout << "Average: " << avg << endl;
}