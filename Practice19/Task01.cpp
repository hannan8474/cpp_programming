#include <iostream>
using namespace std;

class MovingVan
{
    protected:
        float payLoad, milesPerGalon, weight;

    public:
    MovingVan() : payLoad(0), milesPerGalon(0), weight(0) 
    {
        cout << "Moving Van's default constructor" << endl;
    }

    MovingVan(float _payLoad, float _milesPerGalon, float _weight) : payLoad(_payLoad), milesPerGalon(_milesPerGalon), weight(_weight)
    { 
        cout << "Moving Van's parametrized constructor" << endl;
    }

    ~MovingVan() 
    {
        cout << "Moving Van's Destructor" << endl;
    }

    float getPayLoad() const
    {
        return payLoad;
    }

    float getMilesPerGalon() const
    {
        return milesPerGalon;
    }

    void setPayLoad(float _payLoad)
    {
        this -> payLoad = _payLoad;
    }

    void setMilesPerGalon(float _milesPerGalon)
    {
        this -> milesPerGalon = _milesPerGalon;
    }

    float efficiency() const
    {
        return payLoad / (payLoad + weight);
    }

    float costPerTon(float _fuelCost) const
    {
        return _fuelCost / (payLoad / 2000);
    }

    void initialize(float _payLoad, float _milesPerGalon, float _weight)
    {
        this -> payLoad = _payLoad;
        this -> milesPerGalon = _milesPerGalon;
        this -> weight = _weight;
    }

    virtual void getData () const
    {
        cout << "Payload: " << payLoad << endl;
        cout << "Miles per galon: " << milesPerGalon << endl;
        cout << "Weight: " << weight << endl;
    }
};

class Driver
{
    protected:
        float hourlyPay, weight;

    public:
        Driver() : hourlyPay(0), weight(0)
        {
            cout << "Driver's default constructor" << endl;
        }

        Driver(float _hourlyPay, float _weight) : hourlyPay{_hourlyPay}, weight{_weight} 
        {
            cout << "Driver's parametrized constructor" << endl;
        }

        ~Driver()
        {
            cout << "Driver's Destructor" << endl;
        }

        float costPerMile () const
        {
            return hourlyPay / 55.0;
        }

        float getWeight () const
        {
            return weight;
        }

        void initialize (float _hourlyPay, float _weight)
        {
            this -> hourlyPay = _hourlyPay;
            this -> weight = _weight;
        }

        virtual void getData () const
        {
            cout << "Hourly Pay: " << hourlyPay << endl;
            cout << "Weight: " << weight << endl;
        }
};

class DrivenTruck : public MovingVan, public Driver 
{
    public:
    DrivenTruck () : MovingVan(), Driver()
    {
        cout << "DrivenTruck's default constructor" << endl;
    }

    DrivenTruck(float _payLoad, float _milesPerGalon, float _weight, float _hourlyPay, float weight) : MovingVan(_payLoad, _milesPerGalon, _weight), Driver(_hourlyPay, weight) 
    {
        cout << "Driven Truck's parametrized constructor" << endl;
    } 

    float costPerFullDay(float _costOfGas) const
    {
        return ((8.0 * hourlyPay) + (8.0 * _costOfGas * 55.0)) / milesPerGalon;
    }

    float totalWeight() const
    {
        return MovingVan::weight + Driver::weight;
    }

    void initialize (float _payLoad, float _milesPerGalon, float _weight, float _hourlyPay, float weight)
    {
        MovingVan::initialize(_payLoad, _milesPerGalon, _weight);
        Driver::initialize(_hourlyPay, weight);
    }

    void getData () const
    {
        MovingVan::getData();
        Driver::getData();
    }
};

int main()
{
    DrivenTruck chuckFord;
    chuckFord.initialize(10, 100, 20, 123, 75);
    // chuckFord.DrivenTruck::getData();
    Driver *smith = &chuckFord;  // if the function is not declared as virtual then the function call depends upon the type of pointer not the type of object it points to. this is called static or compile time binding.
    smith -> getData();     // if the function is declared virtual in base class then function to be called is determined by the type of object pointer is pointing. this is called dynamic or compile time binding.
    // smith = chuckFord;
    // smith.getData();
    // chuckFord.Driver::initialize(50, 80);
    // chuckFord.Driver::getData();
    // chuckFord.DrivenTruck::getData();
    // cout << "Efficiency: " << chuckFord.efficiency() << endl;
    // cout << "Cost Per Mile: " << chuckFord.costPerMile() << endl;
    // cout << "Cost Per Full Day: " << chuckFord.costPerFullDay(25) << endl;
    // cout << "Total Weight: " << chuckFord.totalWeight() << endl;
    return 0;
}