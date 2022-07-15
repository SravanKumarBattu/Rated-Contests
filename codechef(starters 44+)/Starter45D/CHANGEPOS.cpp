#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a!=c )
	    {
	        if(b!=d)
	        {
	        cout<<1<<endl;
	        }
	        else if (b==d){
	            cout<<2<<endl;

	        }
	    }
	    else if(b!=d)
	    {
	        if(a!=c)
	        {
	            cout<<1<<endl;
	        }
	        else if(a==c)
	        {
	            cout<<2<<endl;
	        }
	    }
	    else if(a==c or b==d)
	    {
	        cout<<1<<endl;
	    }
	}
	return 0;
}
