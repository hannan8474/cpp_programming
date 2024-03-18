#include "iostream"
#include "fstream"

using namespace std;

int main ()
{
    string filename = "input.txt";
    int number, count = 0, max = 0, prev_max = 0;

    ifstream inFile(filename);

    if (inFile.is_open())
    {
        while (inFile >> number)
        {   
            if (count == 0)
            {
                cout << number << " ";
                count++;
            }

            else if (count == 10)
            {
                cout << prev_max << " " << max << endl;
                count = 0;
                max = 0;
                prev_max = 0;
            }

            else 
            {
                if (number > max)
                {
                    prev_max = max;
                    max = number;
                }
                if (prev_max < number && number < max)
                {
                    prev_max = number;
                }
                count++;
            }
        }
    }
    else
    {
        cerr << "Failed to open input file " << filename << endl;
        exit(0);
    }

    return 0;
}