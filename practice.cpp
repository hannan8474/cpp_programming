#include <iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        A() : a(0) 
        {
            cout << "Default constructor of A" << endl;
        }
        A(int _a) : a(_a)
        {
            cout << "Parameterized constructor of A" << endl;
        }
        A(const A& obj) : a(obj.a)
        {
            cout << "Copy constructor of A" << endl;
        }
        void printData() const
        {
            cout << "a: " << a << endl;
        }
        virtual void test() const = 0;
};
class B : public A
{
    private:
        int b;
    public:
        B() : b(0) 
        {
            cout << "Default constructor of B" << endl;
        }
        B(int _a, int _b) : b(_b), A(_a)
        {
            cout << "Parameterized constructor of B" << endl;
        }
        B(const B& obj) : b(obj.b), A(obj)
        {
            cout << "Copy constructor of B" << endl;
        }
        void printData() const
        {
            A::printData();
            cout << "b: " << b << endl;
        }
        void test() const
        {
            cout << "Pure Virtual Functions" << endl;
        }
};
class C : public A
{
private:
        int c;
    public:
        C() : c(0) 
        {
            cout << "Default constructor of B" << endl;
        }
        C(int _a, int _c) : c(_c), A(_a)
        {
            cout << "Parameterized constructor of B" << endl;
        }
        C(const C& obj) : c(obj.c), A(obj)
        {
            cout << "Copy constructor of B" << endl;
        }
        void test() const
        {
            cout << "Pure Virtual Functions" << endl;
        }
};
int main()
{   
    // A oa(6); not possible with abstract classes
    // A* oa = new A(); not possible with abstract classes
    A* oa = new B(); // Only this is possible with abstract classes
    B ob(10, 9);
    C oc(8, 15);

    // cout << sizeof(oa) << endl;
    cout << sizeof(ob) << endl;
    cout << sizeof(oc) << endl;
    // B ob1 = ob;

    // ob.printData();
    // ob.A::printData();

    return 0;
}