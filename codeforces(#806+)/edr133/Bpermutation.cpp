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
        int per=1;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            v[i]=i+1;
        vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            res.push_back(v);
            if(per>=n)
                break;
            else{
                swap(v[per],v[0]);
                per++;
            }
        }
        cout<<res.size()<<endl;
        for(auto &i:res)
        {
            for(auto j:i)
            {

            cout<<j<<' ';

            }

        cout<<endl;
        }
    }


    return 0;
}
