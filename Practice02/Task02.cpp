#include "iostream"
using namespace std;

void array_init(int data[], int SIZE)
{
    int i;
    cout << "Enter array data: ";

    for (i = 0; i < SIZE; i++)
    {
        cin >> data[i];
    }
}

void array_output (int data[], int SIZE)
{
    int i;
    cout << "Entered array data: ";
    for (i = 0; i < SIZE; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

int caculate_even (int data[], int SIZE)
{
    int i, count = 0;
    for (i = 0; i < SIZE; i++)
    {
        if (data[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

float calculate_mean (int data[], int SIZE)
{
    int i, sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum += data[i];
    }
    return (float)sum / SIZE;
}
int main ()
{
    int data[10], count;
    float avg;

    array_init (data, 10);
    array_output (data, 10);
    count = caculate_even (data, 10);
    avg = calculate_mean (data, 10);

    cout << "Count of Even is: " << count << endl;
    cout << "Average is: " << avg << endl;

    return 0;
}