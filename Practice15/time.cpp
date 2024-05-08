#include <iostream>
using namespace std;

class time 
{
    private:
        int hours, minutes, seconds;

    public:
        time () : hours(0), minutes(0), seconds(0) {}  // default constructor

        time (int hours, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds) {} // parameterized constructor

        void display () const
        {
            cout << this -> hours << ":" << this -> minutes << ":" << this -> seconds << endl;
        }

        static time addTimes (const time& obj1, const time& obj2)
        {
            return time (obj1.hours + obj2.hours, obj1.minutes + obj2.minutes, obj1.seconds + obj2.seconds);
        }
};

int main()
{
    time o1(23, 45, 10), o2(7, 32, 35);

    time o3 = time :: addTimes (o1, o2);

    o1.display();
    o2.display();
    o3.display();
    return 0;
}