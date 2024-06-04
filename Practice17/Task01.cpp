#include <iostream>
#include <cmath>
using namespace std;

class NumDays
{
private:
    int hours;

public:
    NumDays(int _hours) : hours(_hours) {}

    void setHours(int _hours)
    {
        this -> hours = _hours;
    }

    int getHours() const
    {
        return this -> hours;
    }

    float getDays() const
    {
        return (hours / 4);
    }

    int operator+ (const NumDays& other) const
    {
        return (hours + other.hours);
    }

    int operator- (const NumDays& other) const
    {
        return abs (hours - other.hours);
    }

    NumDays& operator++()
    {
        hours++;
        hours = hours / 4;
        return *this;
    }

    NumDays& operator++(int)
    {
        NumDays oldState = *this;
        hours++;
        hours = hours / 4;
        return oldState;
    }

    NumDays& operator--()
    {
        hours--;
        hours = hours / 4;
        return *this;
    }

    NumDays& operator--(int)
    {
        NumDays oldState = *this;
        hours--;
        hours = hours / 4;
        return oldState;
    }
};

class TimeOff
{
    private:
        string name;
        int id;
        NumDays maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid, unpaidTaken;

    public:
        TimeOff (string _name, int _id, int _maxSickDays, int _sickTaken, int _maxVacation, int _vacTaken, int _maxUnpaid, int _unpaidTaken) : name(_name), id(_id), maxSickDays(_maxSickDays), sickTaken(_sickTaken), maxVacation(_maxVacation), vacTaken(_vacTaken), maxUnpaid(_maxUnpaid), unpaidTaken(_unpaidTaken) 
        { 
            if (_maxVacation > 240)
            {
                maxVacation.setHours(240);
            }
        }

        void setName(string _name)
        {
            this -> name = _name;
        }

        void setId (int _id)
        {
            this -> id = _id;
        }

        void setMaxSickDays(int _maxSickDays)
        {
            maxSickDays.setHours(_maxSickDays);
        }

        void setSickTaken(int _sickTaken)
        {
            sickTaken.setHours(_sickTaken);
        }

        void setMaxVacation(int _maxVacation)
        {
            maxVacation.setHours(_maxVacation);
        }

        void setVacTaken(int _vacTaken)
        {
            vacTaken.setHours(_vacTaken);
        }

        void setMaxUnpaid(int _maxUnpaid)
        {
            maxUnpaid.setHours(_maxUnpaid);
        }

        void setUnpaidTaken(int _unpaidTaken)
        {
            unpaidTaken.setHours(_unpaidTaken);
        }

        string getName() const
        {
            return this -> name;
        }

        int getId () const
        {
            return this -> id;
        }

        int getMaxSickDays() const
        {
            return maxSickDays.getHours();
        }

        int getSickTaken() const
        {
            return sickTaken.getHours();
        }

        int getMaxVacation() const
        {
            return maxVacation.getHours();
        }

        int getVacTaken() const
        {
            return vacTaken.getHours();
        }

        int getMaxUnpaid() const
        {
            return maxUnpaid.getHours();
        }

        int getUnpaidTaken() const
        {
            return unpaidTaken.getHours();
        }
};

int main()
{


    return 0;
}
