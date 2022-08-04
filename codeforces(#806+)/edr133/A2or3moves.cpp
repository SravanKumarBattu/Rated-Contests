#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;

    if(n==1)
      {
         cout<<2<<endl;

      }
      int rem=n/6;
    if(n%6==0)
    {
         cout<<2*rem<<endl;

    }   else if(n%6 <= 2)
    {
         cout<<2*(rem-1)+3<<endl;

    }   else if (n%6 == 3)
    {
         cout<<2*rem+1<<endl;

    }   else
    {
         cout<<2*rem+2<<endl;

    }
    }
    return 0;
}
