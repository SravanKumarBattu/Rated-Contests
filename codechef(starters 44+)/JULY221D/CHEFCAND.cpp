#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;


        int r=n-x;
        int pos=0;
        for(int i=0;i<400;i++)
        {
            if(i*4>=r)
            {
                pos=i;
                break;
            }
        }
        cout<<pos<<endl;
    }
	return 0;
}
