#include "iostream"
using namespace std;

int main()
{
    float speedAir = 0.0003048 * 1100, speedWater = 0.0003048 * 4900, speedSteel = 0.0003048 * 16400;
    int choice, distance;

    cout << "Enter your choice:" << endl;
    cout << "1. Air\n2. Water\n3. Steel" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter Distance: ";
        cin >> distance;

        cout << "Time: " << distance / speedAir << endl;
        break;

    case 2:
        cout << "Enter Distance: ";
        cin >> distance;

        cout << "Time: " << distance / speedWater << endl;
        break;

    case 3:
        cout << "Enter Distance: ";
        cin >> distance;

        cout << "Time: " << distance / speedSteel << endl;
        break;

    default:
        cout << "Wrong Choice" << endl;
        break;
    }
    return 0;
}