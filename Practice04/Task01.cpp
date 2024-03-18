#include "iostream"
#include "string"
#include "fstream"
#include "cctype"

using namespace std;

int main()
{
    // string filename = "student.txt";
    string name;

    // ifstream inFile("student.txt");
    ifstream inFile;
    inFile.open ("student.txt");

    cout << "Roll No. Name \t\tCGPA" << endl;
    cout << "----------------------" << endl;

    if (inFile.is_open())
    {
        while (getline (inFile, name))
        {
            for (int i = 0; name[i] != 0; i++)
            {
                if (isdigit (name[i]) && name[i + 1] == ' ')
                {
                    cout << name[i] << "\t";
                }
                else if (isdigit (name[i]) && name[i - 1] == ' ')
                {
                    cout << "\t" << name[i];
                }
                else 
                {
                    cout << name[i];
                }
            }
            cout << endl;
        }
        inFile.close();
    }
    else 
    {
        cerr << "Failed to open " << endl;
        exit (0);
    }
    return 0;
}