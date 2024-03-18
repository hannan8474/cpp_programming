#include "iostream"
using namespace  std;

int main()
{
    float f = 2.5, t = 8.9;
    float *fptr = &f, *tptr = &t;

    cout << "Address of f: " << &f << endl << "Value of f: " << f << endl;
    cout << "Address of fptr: " << &fptr << endl << "Value of fptr: " << fptr << endl << "Value at the address present in fptr: " << *fptr << endl;

    cout << "Address of t: " << &t << endl << "Value of t: " << t << endl;
    cout << "Address of tptr: " << &tptr << endl << "Value of tptr: " << tptr << endl << "Value at the address present in tptr: " << *tptr << endl;
    return 0;
}
