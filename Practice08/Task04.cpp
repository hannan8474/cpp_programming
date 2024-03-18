#include "iostream"
using namespace std;

void outputArray (int *array, int size, string *names)
{
    cout << "Names\tNumber" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(names + i) << "\t";
        cout << *(array + i) << endl;
    }
    cout << endl;
}

void sortArray (int *array, int size, string *names)
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
                string temp1 = *(names + j);
                *(names + j) = *(names + j + 1);
                *(names + j + 1) = temp1;
            }
        }
    }
}

int main ()
{
    int numOfStudents;

    cout << "Enter the number of students: ";
    cin >> numOfStudents;

    int *array = new int[numOfStudents];
    string *names = new string[numOfStudents];

    for (int i = 0; i < numOfStudents; i++)
    {
        cout << "Student: ";
        cin >> *(names + i);
        cout << "Number: ";
        cin >> *(array + i);
    }

    outputArray (array, numOfStudents, names);

    sortArray (array, numOfStudents, names);

    outputArray (array, numOfStudents, names);

    delete [] array;
    delete [] names;
}