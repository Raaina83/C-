#include<iostream>
using namespace std;

int main(){
    int amount=1330;
    int hundred,fifty,twnty,one;
    switch (1)
    {
    case 1:
        hundred=amount/100;
        amount=amount%100;
        cout<<"No of 100RS needed:"<<hundred<<endl;
    case 2:
        fifty=amount/50;
        amount=amount%50;
        cout<<"No of 50Rs needed: "<<fifty<<endl;
    case 3:
        twnty=amount/20;
        amount=amount%20;
        cout<<"No of 20RS needed: "<<twnty<<endl;
    case 4:
        one=amount/1;
        cout<<"No of 1RS needed: "<<one<<endl;
    }
}