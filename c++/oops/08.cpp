#include<iostream>
using namespace std;  //MAKING A SHOP WITH NUMEROUS ITEMS AND SETTING THEIR PRICES!!(MY BEST ATTEMPT YET HEHE:))

class shop{
    int itemid[100];
    int itemprice[100];
    int counter=0;
    int n;

public:
   void number(){
    cout<<"enter the number of items in your shop"<<endl;
    cin>>n;
    }
   void getidprice(){
    for(int i=0;i<n;i++){
    cout<<"enter the id of item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter price of your item "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter ++;
   }
   }
   void display(){
    for(int i=0;i<counter;i++){
       cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
   }

};

int main(){
    shop s1;
    s1.number();
    s1.getidprice();
    s1.display();
    return 0;
}