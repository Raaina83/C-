#include<iostream>
#include<fstream>
using namespace std;

/*
    We have three classes for input and output in c++:
    1.fstream (base class)
    2.ifstream (derived)
    3.ofstream (derived)
*/

/*
    Ways to open a file(since we need to open a file before doing any operation )
    1. using constructor
    2. using member function open() of the class
*/

int main(){
    string s1;
    string s2;
    cout<<"Enter your name ";
    cin>>s1;

    //OPening a file using contructor and writing to it!
    ofstream out("sample1.txt"); //Write operation
    out<<s1;
    out<<"khiwhq";

    out.close();

    //Opening a file using constructor and reading it!
    ifstream in("sample1.txt"); //basically connecting the file with the stream
    // in>>s2; //stops taking input when space or next line encountered!!
    getline(in, s2); //to get a whole line(not paragh)
    cout<<s2;

    in.close();
    return 0;
}