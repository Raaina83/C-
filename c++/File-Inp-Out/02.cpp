#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s1;
    // ofstream rout("sample2.txt");

    ifstream rout;
    rout.open("sample2.txt");

    while (rout.eof() == 0)
    {
        getline(rout, s1);
         cout<<s1<<endl;
    }
    return 0;

}