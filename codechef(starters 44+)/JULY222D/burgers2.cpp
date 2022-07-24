/*
Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 22 types of burgers:

Normal burgers, which cost XX rupees each
Premium burgers, which cost YY rupees each (where Y \gt XY>X)
Chef has RR rupees. Chef wants to buy exactly NN burgers. He also wants to maximize the number of premium burgers he buys. Determine the number of burgers of both types Chef must buy.

Output -1−1 if it is not possible for Chef to buy NN burgers.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four space-separated integers XX, YY, NN and RR — the cost of a normal burger, the cost of a premium burger, the number of burgers Chef wants to buy and the amount of money Chef has.
Output Format
For each test case, output on a new line two integers: the number of normal burgers and the number of premium burgers Chef must buy satisfying the given conditions.

Output -1−1 if he cannot buy NN burgers.
*/
//solution
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int x,y,n,r,a,b,s;
        cin>>x>>y>>n>>r;
        if(n*x>r){
            cout<<"-1";
        }
        else{
             a=r-(n*x);
             b=y-x;
             s=a/b;
            if(s>=n){
                cout<<"0"<<" "<<n;
            }
            else{
                cout<<n-s<<" "<<s;
            }
        }
        cout<<'\n';
	}
	return 0;
}
