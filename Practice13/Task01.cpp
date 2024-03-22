#include <iostream>
using namespace std;

class Circle 
{
    private:
    int x, y;
    double radius;
    const double PI = 3.141593;

    public:

    // Constructors
    Circle () : x{0}, y{0}, radius{0.0} 
    {
        cout << "Default constructor" << endl;
    }

    Circle (int x, int y, double radius) : x(x), y(y), radius(radius), PI(3.141593)
    {
        cout << "Parameterized constructor 1" << endl;
    }

    Circle (int x, int y) : x(x), y(y), radius(0.0)
    {
        cout << "Parameterized constructor 2" << endl;
        if (x >= -50 && x <= 50)
        {
            this -> x = x;
        }
        else
        {
            this -> x = 0;
        }
        if (y >= -50 && y <= 50)
        {
            this -> y = y;
        }
        else
        {
            this -> y = 0;
        }
    }

    Circle (int x, double radius) : x(x), y(0), radius(radius)
    {
        cout << "Parameterized constructor 3" << endl;
        if (x >= -50 && x <= 50)
        {
            this -> x = x;
        }
        else
        {
            this -> x = 0;
        }
        if (radius >= 1 && radius <= 10)
        {
            this -> radius = radius;
        }
        else 
        {
            this -> radius = 5;
        }
    }

    Circle (const Circle& c) : x(c.x), y(c.y), radius(c.radius)
    {
        cout << "Copy constructor" << endl;
    }

    ~Circle ()
    {
        cout << "Destructor executed" << endl;
    }

    // mutators
    void setX (const int& x)
    {
        if (x >= -50 && x <= 50)
        {
            this -> x = x;
        }
        else
        {
            this -> x = 0;
        }
    }

    void setY (const int& y)
    {
        if (y >= -50 && y <= 50)
        {
            this -> y = y;
        }
        else
        {
            this -> y = 0;
        }
    }

    void setRadius (const double& radius)
    {
        if (radius >= 1 && radius <= 10)
        {
            this -> radius = radius;
        }
        else 
        {
            this -> radius = 5;
        }
    }

    // accessors
    int getX () const
    {
        return this -> x;
    }

    int getY () const
    {
        return this -> y;
    }

    double getRadius () const
    {
        return this -> radius;
    }

    void setCircle (const int& x, const int& y, const double& radius)
    {
        setX (x);
        setY (y);
        setRadius (radius);
    }

    void getCircle ()
    {
        cout << "Enter x-coordinate: ";
        cin >> this -> x;
        setX (this -> x);

        cout << "Enter y-coordinate: ";
        cin >> this -> y;
        setY (this -> y);

        cout << "Enter radius: ";
        cin >> this -> radius;
        setRadius (this -> radius);
    }

    void putCircle () const
    {
        cout << this -> x << "\t";
        cout << this -> y << "\t";
        cout << this -> radius << "\t";
        cout << endl;
    }

    double getArea () const
    {
        return PI * (this -> radius) * (this -> radius);
    }

    double getDiameter () const
    {
        return 2 * (this -> radius);
    }

    double getCircumference () const
    {
        return 2 * PI * (this -> radius);
    }

    Circle addCircle(const Circle& obj) const
    {
        return Circle(x + obj.x, y + obj.y, radius + obj.radius);
    }

    bool isEqual(const Circle& obj) const
    {
        return (obj.x == x && obj.y == y && obj.radius == radius);
    }

    int findCircle(const Circle circle[], int size) const
    {
        for (int i = 0; i < size; i++)
        {
            if ((this -> radius == circle[i].radius) && (this -> x == circle[i].x) && this -> y == circle[i].y)
            {
                return 1;
            }
        }
        return -1;
    }

    void updateObjects (Circle circle[], int size) const
    {
        for (int i = 0; i < size; i++)
        {
            circle[i].radius = this-> radius;
        }
    }
};

int main()
{
    Circle circle[3]{Circle(), Circle(5, 7), Circle(8, 7.0)};

    Circle obj;

    obj.setCircle(12, 60, 5);

    circle[0].getCircle();
    circle[1].setRadius(9);
    circle[2].setY(25);

    for (int i = 0; i < 3; i++)
    {
        circle[i].putCircle();
    }

    cout << "Area of circle is " << circle[0].getArea() << endl;
    cout << "Diameter of circle is " << circle[1].getDiameter() << endl;
    cout << "Circumference of circle is " << circle[2].getCircumference() << endl;

    Circle add = obj.addCircle(circle[0]);

    cout << "Addition of object circle and circle[0] is: ";
    add.putCircle ();

    if (obj.isEqual(circle[1]))
    {
        cout << "Same state circle" << endl;
    }
    else
    {
        cout << "Different state circle" << endl;
    }

    if (obj.findCircle (circle, 3) > 0)
    {
        cout << "Index of same state circle" << obj.findCircle (circle, 3) << endl;
    }
    else
    {
        cout << "No matching state circle" << endl;
    }



    return 0;
}