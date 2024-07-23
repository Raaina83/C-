#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interest;
    float returnval;
public:
    BankDeposit(){} //GIVES ERROR IF THIS ISNT WRITTEN
    BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    interest=r;
    returnval=principal;
    for(int i=0;i<y;i++){
       returnval=returnval * (1+r);
    }
    }
    BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interest=float(r)/100;
    returnval=principal;
    for(int i=0;i<y;i++){
        returnval=returnval*(1+interest);
    }
    }
    void show(){
    cout<<"principal amount was"<<principal<<"."<<"Return value after"<<years<<" years"<<" is"<<returnval<<endl;
    }
};

int main(){
    BankDeposit A1,A2,A3;
    int p,y,r;
    float R;
    cout<<"enter the value of p,y,r";
    cin>>p>>y>>r;
    A1=BankDeposit(p,y,r);
    A1.show();
    cout<<"enter the value of p,y,R";
    cin>>p>>y>>R;
    A2=BankDeposit(p,y,R);
    A2.show();
    //A3.show();
    return 0;
}
