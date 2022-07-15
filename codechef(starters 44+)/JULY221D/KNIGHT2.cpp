
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int sum1=a+b;
        int sum2=x+y;
        if((sum1%2==0 and sum2%2==0 )or(sum1%2==1 and sum2%2==1 ))
        {
            cout<<"Yes"<<endl;
        }
        if((sum1%2==0 and sum2%2==1 )or(sum1%2==1 and sum2%2==0 ))
        {
            cout<<"No"<<endl;
        }
    }
	return 0;
}
