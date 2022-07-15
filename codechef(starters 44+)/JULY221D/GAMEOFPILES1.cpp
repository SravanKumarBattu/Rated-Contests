
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=INT_MAX;
	    int pos=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]&&1)
	        {
	            pos++;

	        }
	        if(sum>=arr[i])
	        {
	            sum=arr[i];
	        }

	    }
	    if(sum==1)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else if(pos%2==0 )
	        {
	        cout<<"Chefina"<<endl;
	       }
	    else
	        {

	        cout<<"Chef"<<endl;
	        }

	}
	return 0;
}
