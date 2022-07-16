#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
long long digi(int n)
{
    long long a=0;
    while(n)
    {
        int r=n%10;
        a+=r;
        n/=10;
    }
    return a;

}
void solve(long long n)
{

    long long m=INT_MIN;
    long long y=922337;
    for(long long i=0;i<y;i++)
{
        long long c=digi(i);
        long long d=digi(2*i);
        m=max(m,d);
        if(c==n and d== m)
         {

           cout<<m<<endl<<i<<endl;
            break;
         }

}
}
int main()
{
    long long n;
    cin>>n;
    solve(n);
    return 0;
}
