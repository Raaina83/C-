#include <iostream>
#include <cmath>
using namespace std;
// MAKING MY OWN CALCULTOR!!
class SimpleCalculator
{
protected:
    int val1, val2;

public:
    SimpleCalculator(){};
    SimpleCalculator(int a, int b)
    {
        val1 = a;
        val2 = b;
    }
    int getsum()
    {
        return val1 + val2;
    }

    int getdiff()
    {
        return val1 - val2;
    }
    int getmultiply()
    {
        return val1 * val2;
    }
    int getdivide()
    {
        return val1 / val2;
    }
    void displayResult()
    {
        cout << "The sum of values is " << getsum() << endl;
        cout << "The difference of values is " << getdiff() << endl;
        cout << "The multiplication of values is " << getmultiply() << endl;
        cout << "The value after division is " << getdivide() << endl;
    }
};

class ScientificCalculator
{
protected:
    double a;

public:
    ScientificCalculator(){};
    ScientificCalculator(double x)
    {
        a = x;
    }
    double getSin()
    {
        return sin(a);
    }
    double getCos()
    {
        return cos(a);
    }
    double getTan()
    {
        return tan(a);
    }
    void result()
    {
        cout << "The sin of " << a << " is " << getSin() << endl;
        cout << "The tan of " << a << " is " << getTan() << endl;
        cout << "The cos of " << a << " is " << getCos() << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator(){};
    HybridCalculator(int x, int y, double z)
    {
        val1 = x;
        val2 = y;
        a = z;
    }
    void result()
    {
        cout << "The sum of values is " << getsum() << endl;
        cout << "The difference of values is " << getdiff() << endl;
        cout << "The multiplication of values is " << getmultiply() << endl;
        cout << "The value after division is " << getdivide() << endl;
        cout << "The sin of " << a << " is " << getSin() << endl;
        cout << "The tan of " << a << " is " << getTan() << endl;
        cout << "The cos of " << a << " is " << getCos() << endl;
    }
};

int main()
{
    int a,b;
    float c;
    cout<<"Enter the values of a,b and c:"<<endl;
    cin>>a>>b>>c;
    SimpleCalculator S(a, b);
    S.displayResult();
    ScientificCalculator Sci(c);
    Sci.result();
    HybridCalculator h(a, b, c);
    h.result();
    return 0;
}