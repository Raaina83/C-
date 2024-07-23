#include<iostream>
using namespace std;
int factorial(int n){
    long long int ans=1,i=n;
	while (i!=1)
	{
		ans=ans*i;
		cout<<ans<<" ";
		i--;
	}
	cout<<ans;
	
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    factorial(n);
	}	
	return 0;
}
