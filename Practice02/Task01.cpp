#include "iostream"
using namespace std;

int charges (int days, int dailyRate, int medicineCharges, int serviceCharges) 
{
    return (days * dailyRate) + medicineCharges + serviceCharges;
}

int charges (int serviceCharges, int medicineCharges)
{
    return serviceCharges + medicineCharges;
}

int main ()
{
    int patient, days, dailyRate, medicineCharges, serviceCharges, totalBill;
    cout << "Enter the type of patient: " << endl;
    cout << "1. in-patient\n2. out-patient" << endl;
    cin >> patient;

    switch (patient) 
    {
        case 1:
            cout << "Number of days spent in hospital: ";
            cin >> days;
            cout << "Daily rate of hospital: ";
            cin >> dailyRate;
            cout << "Hospital medicine charges: ";
            cin >> medicineCharges;
            cout << "Charges for hospital services: ";
            cin >> serviceCharges;
            totalBill = charges (days, dailyRate, medicineCharges, serviceCharges);
            cout << "Your total bill is: " << totalBill << endl;
            break;
        case 2:
            cout << "Charges for hospital services: ";
            cin >> serviceCharges;
            cout << "Hospital medicine charges: ";
            cin >> medicineCharges;
            totalBill = charges (serviceCharges, medicineCharges);
            cout << "Your total bill is: " << totalBill << endl;
            break;
    }
    return 0;
}