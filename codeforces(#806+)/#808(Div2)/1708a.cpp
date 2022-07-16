#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool res=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }

        for(int i=1;i<n;i++)
                {
                    res=res and a[i]%a[0]==0;

                }
        if(res)
        {
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }

    return 0;
}
