#include "iostream"
using namespace std;

int main ()
{
    int length1, width1, length2, width2, area1, area2;


    cout << "Enter length and width of rectangle 1, respectively: ";
    cin >> length1 >> width1;

    cout << "Enter length and width of rectangle 2, respectively: ";
    cin >> length2 >> width2;

    area1 = width1 * length1;
    area2 = width2 * length2;
    
    if (area1 > area2)
    {
        cout << "Area of rectangle 1 is larger than area of rectangle 2" << endl;
    }
    else if (area1 < area2)
    {
        cout << "Area of rectangle 2 is larger than area of rectangle 1" << endl;
    }
    else 
    {
        cout << "Area of both the rectangles are same" << endl;
    }
    return 0;
}