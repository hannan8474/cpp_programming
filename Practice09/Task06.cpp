#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to convert a number to words
string numberToWords(int number) {
    const string units[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    const string teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    const string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    string result;

    if (number >= 1000) {
        result += units[number / 1000] + " Thousand ";
        number %= 1000;
    }

    if (number >= 100) {
        result += units[number / 100] + " Hundred ";
        number %= 100;
    }

    if (number >= 10 && number <= 19) {
        result += teens[number - 10];
    } else {
        result += tens[number / 10] + " " + units[number % 10];
    }

    return result;
}

int main() {
    // Get user input
    string date, payee;
    double amount;

    cout << "Enter the date (MM/DD/YYYY): ";
    getline(cin, date);

    cout << "Enter the payee's name: ";
    getline(cin, payee);

    cout << "Enter the amount of the check (up to $10,000): $";
    cin >> amount;

    // Check if the amount is within the valid range
    if (amount < 0 || amount > 10000) {
        cout << "Invalid amount. Please enter an amount between 0 and 10,000." << endl;
        return 1;
    }

    // Display the simulated paycheck
    cout << fixed << setprecision(2);
    cout << "Date: " << date << endl;
    cout << "Pay to the Order of: " << payee << " $" << amount << endl;

    // Convert the numeric amount to words
    int dollars = amount;
    int cents = (amount - dollars) * 100;

    cout << numberToWords(dollars) << " dollars and " << numberToWords(cents) << " cents" << endl;

    return 0;
}
