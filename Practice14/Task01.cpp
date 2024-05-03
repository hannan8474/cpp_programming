#include <iostream>
using namespace std;

class rationalNumber 
{
    private:
        int numerator, denominator;
    public:
        rationalNumber(int numerator, int denominator = 1) : numerator(numerator)
        {
            this -> denominator = (denominator > 0) ? denominator : 1;
        }

        void setNumerator(int numerator)
        {
            this -> numerator = numerator;
        }

        void setDenominator(int denominator)
        {
            this -> denominator = denominator > 0 ? denominator : 1;
        }

        int getNumerator() const
        {
            return this -> numerator;
        }

        int getDenominator() const
        {
            return this -> denominator;
        }

        rationalNumber operator*(const rationalNumber& obj) const
        {
            return rationalNumber(this -> numerator * obj.numerator, this -> denominator * obj.denominator);
        }

        rationalNumber operator/(const rationalNumber& obj) const
        {
            return rationalNumber(this -> numerator * obj.denominator, this -> denominator * obj.numerator);
        }

        rationalNumber operator+(const rationalNumber& obj) const
        {
            return rationalNumber((this -> numerator * obj.denominator) + (this -> denominator * obj.numerator), (this -> denominator * obj.denominator));
        }

        rationalNumber operator-(const rationalNumber& obj) const
        {
            return rationalNumber((this -> numerator * obj.denominator) - (this -> denominator * obj.numerator), this -> denominator * obj.denominator);
        }

        bool operator==(const rationalNumber& obj) const
        {
            return ((this -> numerator * obj.denominator) == (obj.numerator * this -> denominator));
        }

        bool operator < (const rationalNumber& obj) const
        {
            return ((this -> numerator * obj.denominator) < (obj.numerator * this -> denominator));
        }

        rationalNumber operator-() const
        {
            return rationalNumber(-this -> numerator, this -> denominator);
        }

        bool operator!() const
        {
            if (this -> numerator < 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        friend istream& operator >> (istream& in, rationalNumber& obj)
        {
            in >> obj.numerator;
            cout << "/";
            in >> obj.denominator;

            if (obj.denominator <= 0)
            {
                obj.denominator = 1;
            }
            return in;
        }

        friend ostream& operator << (ostream& out, const rationalNumber& obj)
        {
            out << obj.numerator << "/" << obj.denominator << endl;
            return out;
        }
};

int main()
{
    rationalNumber r1{2, 3}, r2{4, -1};

    cout << r1 + r2;
    cout << r1 * r2;
    cout << r1 / r2;
    cout << -r1;
    
    if (r1 < r2)
    {
        cout << "True";
    }

    else if (r1 == r2)
    {
        cout << "True Equality";
    }

    else 
    {
        cout << "False";
    }
    return 0;
}