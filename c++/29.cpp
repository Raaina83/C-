#include <iostream>
using namespace std;
// INITIALIZATION-initialized in the order of declaration!(when constructor is complex)!
class test
{
    int a;
    int b;

public:
    test(int i, int j) : a(i), b(j)
    {
        cout << "value of a and b is " << a << "," << b << endl;
    }
    // test(int i,int j): a(i),b(a+j){}
    // test(int i,int j): b(j),a(b+j){}--NOT GOING TO WORK,WILL GIVE GARBAGE VALUE AS A WAS DECLARED FIRST!!!
    // test(int i,int j): a(i),b(2*j){}
};

int main()
{
    test raaina(45, 48);
    return 0;
}