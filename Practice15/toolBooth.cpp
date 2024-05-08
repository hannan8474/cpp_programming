#include <iostream>
using namespace std;

class toolBooth
{
private:
    int carsPassed;
    float amountCollected;

public:
    toolBooth() : carsPassed(0), amountCollected(0) {}  // default constructor

    void payingCar ()
    {
        carsPassed++;
        amountCollected += 0.50;
    }

    void nonPayingCar ()
    {
        carsPassed++;
    }

    void display () const
    {
        cout << this -> carsPassed << "\t" << this -> amountCollected << endl;
    }
};

int main()
{
    toolBooth o1;

    o1.payingCar();

    o1.display();

    return 0;
}