#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        vector<long long int>vec;
        long long int n,l,r;
        cin>>n>>l>>r;
        long long int res=0;
        for(long long int i=1;i<=n;i++)
        {
            long long int x=i*(r/i);

            if(x>=l)
            {
                vec.push_back(x);
            }
            else{
                res=1;
                break;
            }
        }
        if(res==0)
        {
               cout<<"YES"<<endl;
            for(int i=0;i<vec.size();i++)
                cout<<vec[i]<<" ";
            cout<<endl;

        }
        else{

            cout<<"No"<<endl;
         }
    }

}
