#include <iostream>
using namespace std;

class IntegerSet 
{
    private:
        int size;
        int *array;
    public:
    IntegerSet () : size(5)
    {
        array = new int[size];
        for (int i = 0; i < size; i++)
        {
            array[i] = 0;
        }
    }

    IntegerSet (int size) : size(size)
    {
        array = new int[this -> size];
        for (int i = 0; i < this -> size; i++)
        {
            array[i] = 0;
        }
    }

    IntegerSet (const IntegerSet& obj) : size(obj.size)
    {
        array = new int[this -> size];
        for (int i = 0; i < this -> size; i++)
        {
            array[i] = obj.array[i];
        }
    }

    IntegerSet operator= (const IntegerSet& obj) 
    {
        if (this != &obj && this -> size != obj.size)
        {
            for (int i = 0; i < this -> size; i++)
            {
                array[i] = obj.array[i];
            }
        }
        return *this;
    }

    bool operator== (const IntegerSet& obj) const
    {
        if (this -> size != obj.size)
        {
            return false;
        }
        else
        {
            for (int i = 0; i < this -> size; i++)
            {
                if (array[i] != obj.array[i])
                    return false;
            }
            return true;
        }
    }

    IntegerSet operator! ()
    {
        IntegerSet temp;
        int j = (this -> size) - 1;
        temp.size = this -> size;
        temp.array = new int[this -> size];

        for (int i = 0; i < (this -> size) / 2; i++)
        {
            temp.array[i] = this -> array[j--];
        }
        return temp;
    }

    friend ostream& operator<< (ostream& out, const IntegerSet& obj)
    {
        for (int i = 0; i < obj.size; i++)
        {
            out << obj.array[i] << "\t";
        }

        return out;
    }

    friend istream& operator>> (istream& in, IntegerSet& obj)
    {
        cout << "Enter size: ";
        in >> obj.size;
        obj.array = new int[obj.size];
        for (int i = 0; i < obj.size; i++)
        {
            in >> obj.array[i];
        }
        return in;
    }

    ~IntegerSet ()
    {
        delete[] array;
    }
};

int main()
{
    IntegerSet s1, s2;

    cin >> s1 >> s2;

    cout << s1 << endl << s2 << endl;

    return 0;
}