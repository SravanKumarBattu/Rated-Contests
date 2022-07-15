#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b and a>c)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(b>a and b>c)
	    {
	        cout<<"Bob"<<endl ;
	    }
	    else if(c>a and c>b)
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
