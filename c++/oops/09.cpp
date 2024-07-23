#include<iostream> //IMPORTANT ONE
using namespace std;

class employee{
    int id;
    static int count; //WITHOUT STATIC COUNT WOULD BE DIFFERENT FOR EVERY NEW EMPLOYEE(OBJECT),CANNOT CHANGE DEFAULT VALUE HERE
public:
    void setdata(){
        cout<<"enter id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"the id of employee number "<<count<<" is "<<id<<endl;
    }
};

int employee:: count; //DEFAULT VALUE IS 0 , CAN CHANGE DEFAULT VALUE HERE

int main(){
    employee sunandini,nandini,nakul; //SHARING SAME "COUNT"
    sunandini.setdata();
    sunandini.getdata();
    nandini.setdata();
    nandini.getdata();
    nakul.setdata();
    nakul.getdata();
   return 0;
}