/*
Alice likes all the numbers which are divisible by AA. Bob does not like the numbers which are divisible by BB and likes all the remaining numbers. Determine the smallest number greater than or equal to NN which is liked by both Alice and Bob. Output -1−1 if no such number exists.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three space-separated integers AA, BB and NN — the parameters mentioned in the problem statment.
Output Format
For each test case, output the smallest number \ge≥ NN which is divisible by AA and is not divisible by BB. Output -1−1 if no such number exists.
*/
//solution

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
	    int i=n;
	    int res=0;
	        if(a%b==0 or b==1)
	        {
	            cout<<-1<<endl;

	        }
	        else {

	            int l=n/a;
	            if(n%a==0 and n%b!=0)
	            {
	                cout<<n<<endl;
	            }
	            else
	            {
	                int m=n;
	                if(n%a!=0)
	                {
	                    m=(l+1)*a;
	                }
	                while(m%b==0)
	                {
	                    m+=a;
	                }
	                cout<<m<<endl;
	            }
	        }
	    }

	return 0;
}

