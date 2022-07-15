#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{

	    int n,x,y,z;
	    cin>>n>>x>>y>>z;
	     int rem=n-(x+y);
	    if(rem>=z)
	    {
	        cout<<0<<endl;
	    }
	    else if(rem+x>=z or rem+y>=z)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
