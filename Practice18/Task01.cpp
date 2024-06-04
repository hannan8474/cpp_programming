#include <iostream>
using namespace std;

class Package
{
    string sender, receiver, addressSender, addressReceiver;
    float weight, costPerOunce;

    public:
    Package(string _sender, string _receiver, string _addressSender, string _addressReceiver, float _weight, float _costPerOunce) : sender(_sender), receiver(_receiver), addressSender(_addressSender), addressReceiver(_addressReceiver)
    {
        if (_weight >= 0)
        {
            weight = _weight;
        }
        else 
        {
            weight = 0;
        }
        if (_costPerOunce >= 0)
        {
            costPerOunce = _costPerOunce;
        }
        else
        {
            weight = 0;
        }
    }

    float getWeight() const
    {
        return weight;
    }

    float calculateCost () const
    {
        return costPerOunce * weight;
    }

    void printDetails () const
    {
        cout << "Sender: " << sender << endl;
        cout << "Receiver: " << receiver << endl;
        cout << "Address of Sender: " << addressSender << endl;
        cout << "Address of Receiver: " << addressReceiver << endl;
        cout << "Weight: " << weight << endl;
        cout << "Cost per Ounce: " << costPerOunce << endl;
    }

    ~Package() { }
};

class TwoDayPackage : public Package
{
    float flatFee;

    public:
    TwoDayPackage(string _sender, string _receiver, string _addressSender, string _addressReceiver, float _weight, float _costPerOunce, float _flatFee) : Package{_sender, _receiver, _addressSender, _addressReceiver, _weight, _costPerOunce}, flatFee(_flatFee) { }

    float calculateCost() const
    {
        return Package::calculateCost() + flatFee;
    }

    void printDetails() const
    {
        Package::printDetails();
        cout << "Flat Fee: " << flatFee << endl;
    }

    ~TwoDayPackage() { }
};

class OvernightPackage : public Package
{
    float feePerOunce;

    public:
    OvernightPackage(string _sender, string _receiver, string _addressSender, string _addressReceiver, float _weight, float _costPerOunce, float _feePerOunce) : Package{_sender, _receiver, _addressSender, _addressReceiver, _weight, _costPerOunce}, feePerOunce(_feePerOunce) { }

    float calculateCost () const
    {
        return Package::calculateCost() + (Package::getWeight() * feePerOunce);
    }

    void printDetails() const
    {
        Package::printDetails();
        cout << "Additional Fee Per Ounce: " << feePerOunce << endl;
    }

    ~OvernightPackage() { }
};

int main()
{
    OvernightPackage _package1("Abdul Hannan", "Faizan", "Jhang", "Fsd", 10.0, 35.0, 5.0);
    _package1.printDetails();

    cout << "Overnight Package Cost: " << _package1.calculateCost() << endl;
    return 0;
}