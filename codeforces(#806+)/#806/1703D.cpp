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
        unordered_map<string,int>mp;
        vector<string>v;

        for(int i=0;i<n;i++)
        {
            string a;
             cin>>a;
             v.push_back(a);
             mp[a]=1;
        }
        vector<int>res(n,0);
        for(int i=0;i<n;i++)
        {

            for(int j=1;j<v[i].size();j++)
            {

                string sa=v[i].substr(0,j);
                string sb=v[i].substr(j);
                if(mp.find(sa)!=mp.end() and mp.find(sb)!=mp.end())
                {
                    res[i]=1;
                    break;

                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }

    cout<<endl;
    }
    return 0;
}
