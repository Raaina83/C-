#include <iostream>
using namespace std;
//AMBIGUITY RESOLUTION!!
class Base1
{
public:
    void greet()
    {
        cout << "How are you??" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2::greet(); // AMBIGUITY RESOLUTION
    }
};

int main()
{
    Derived d1;
    d1.greet(); // AMBIGIOUS
}