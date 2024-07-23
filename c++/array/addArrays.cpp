#include<iostream>
#include<vector>
using namespace std;

vector<int> add(vector<int>& a,int m,vector<int>& b,int n);
void print(vector<int>& a);
vector<int> reverse(vector<int> a);

int main(){
    vector<int> a={1,2,3,4};
    vector<int> b={6};
    vector<int> ans=add(a,a.size(),b,b.size());
    print(a);
    print(b);
    print(ans);
    return 0;
}

vector<int> add(vector<int>& a,int m,vector<int>& b,int n){
    int i=m-1;
    int j=n-1;
    int carry=0;
    vector<int> ans;
    while(i>=0 && j>=0){
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //firts case
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

vector<int> reverse(vector<int> a){
    int s=0,e=a.size()-1;
    while(s<e){
        swap(a[s++],a[e--]);
    }
    return a;
}

void print(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}