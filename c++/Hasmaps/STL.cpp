#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //Creation
    unordered_map<string, int> m;

    //Insertion
    //1.
    pair<string,int> p = make_pair("raaina", 3);
    m.insert(p);

    //2.
    pair<string, int> p2("mera", 1);
    m.insert(p2);

    //3.
    m["naam"] = 2;
    m["naam"]= 1;
    cout<<m.at("naam")<<endl;
    cout<<m["naam"]<<endl;

    cout<<m["unknown"]<<endl; //will create new key with value 0
    cout<<m.at("unknown")<<endl; //will give error if no instance of unknown
}