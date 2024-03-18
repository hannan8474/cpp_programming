#include "iostream"
using namespace std;

int calculateGallonsOfPaint (int numOfRooms, int sqFeetWall, int sqFeetPerGallon = 110)
{
    return (numOfRooms * sqFeetWall) / sqFeetPerGallon;
}

int calculateHrsOfLabor (int gallonsOfPaint, int hrsPerGallon = 8)
{
    return gallonsOfPaint * hrsPerGallon;
}

int calculateCostOfPaint (int gallonsOfPaint, int pricePaint)
{
    return gallonsOfPaint * pricePaint;
}

int calculateLaborCharges (int hrsOfLabor, int laborperHrs = 25)
{
    return hrsOfLabor * laborperHrs;
}

int main ()
{
    int numOfRooms, pricePaint, sqFeetWall, gallonsOfPaint, hrsOfLabor, costOfPaint, laborCharges, totalCostOfPaint;

    cout << "Enter number of rooms: ";
    cin >> numOfRooms;
    cout << "Square feet of wall space in each room: ";
    cin >> sqFeetWall;
    cout << "Price of paint per gallon: ";
    cin >> pricePaint;

    gallonsOfPaint = calculateGallonsOfPaint (numOfRooms, sqFeetWall);
    hrsOfLabor = calculateHrsOfLabor (gallonsOfPaint);
    costOfPaint = calculateCostOfPaint (gallonsOfPaint, pricePaint);
    laborCharges = calculateLaborCharges (hrsOfLabor);

    cout << "Total cost of paint: " << costOfPaint + laborCharges;
    return 0;
}