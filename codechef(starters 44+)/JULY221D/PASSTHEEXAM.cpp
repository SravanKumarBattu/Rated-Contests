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
        int sum=a+b+c;
        if(sum >= 100 and (a>=10 and b>=10 and c>=10)){

                cout<<"PASS"<<endl;

        }
        else
           {
            cout<<"FAIL"<<endl;
           }
    }
	return 0;
}
