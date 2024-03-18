#include <iostream>
using namespace std;

class Employee 
{
    private:
        string name, department, position;
        int id;

    public:

        // Constructors
        // Default constructor
        Employee () 
        {
            cout << "Default Constructor called" << endl;
            name = " ";
            id = 0;
            department = " ";
            position = " ";
        }
        
        // Parameterized constructors with four arguments
        Employee (string name_, int id_, string department_, string position_)
        {
            cout << "Parameterized Constructor called" << endl;
            name = name_;
            id = id_;
            department = department_;
            position = position_;
        }

        // Parameterized constructors with two arguments
        Employee (string name_, int id_)
        {
            cout << "Parameterized Constructor with two arguments called" << endl;
            name = name_;
            id = id_;
            department = " ";
            position = " ";
        }

        // Copy Constructor
        Employee (const Employee& obj)
        {
            cout << "Copy Constructor called" << endl;
            name = obj.name;
            id = obj.id;
            department = obj.department;
            position = obj.position;
        }

        ~Employee ()
        {
            cout << "Destructor called." << endl;
        }
        // Function to take inputs
        void getInfo ()
        {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Employee Id: ";
            cin >> id;
            cout << "Enter Department: ";
            cin >> department;
            cout << "Enter Position: ";
            cin >> position;
        }

        // Function to display outputs
        void putInfo ()
        {
            cout << name << "\t";
            cout << id << "\t";
            cout << department << "\t";
            cout << position << "\t";
            cout << endl;
        }

        void setInfo (string name_, int id_, string department_, string position_)
        {
            name = name_;
            id = id_;
            department = department_;
            position = position_;
        }

        // Setters function
        void setName ()
        {
            cout << "Enter Name: ";
            cin >> name;
        }
        void setId ()
        {
            cout << "Enter Id: ";
            cin >> id;
        }
        void setDepartment ()
        {
            cout << "Enter Department: ";
            cin >> department;
        }
        void setPosition ()
        {
            cout << "Enter Position: ";
            cin >> position;
        }
        
        // Getter functions
        string getName ()
        {
            return name;
        }
        int getId ()
        {
            return id;
        }
        string getDepartment ()
        {
            return department;
        }
        string getPosition ()
        {
            return position;
        }

};

int main()
{
    Employee employee1;
    Employee employee2 ("Alishba", 2404, "IT", "Lecturer");
    Employee employee3 ("Faizan", 0);
    Employee employee4 (employee1);
    Employee employee5 = employee2;

    employee1.putInfo ();
    employee2.putInfo ();
    employee3.putInfo ();
    employee4.putInfo ();
    employee5.putInfo ();


    // employee1.getInfo();

    // employee2.setName();
    // employee2.setId();
    // employee2.setDepartment();
    // employee2.setPosition();
    
    // employee1.putInfo();
    // cout << employee2.getName() << "\t";
    // cout << employee2.getId() << "\t";
    // cout << employee2.getDepartment() << "\t";
    // cout << employee2.getPosition() << "\t";

    // employee3.setInfo ("Alishba", 2404, "IT", "Lecturer");

    return 0;
}