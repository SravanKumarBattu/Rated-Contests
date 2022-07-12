#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int c=0;
        unordered_set<char> mp;
        for(int i=0;i<n;i++)
        {
                    mp.insert(s[i]);
        }
        int a=mp.size();
        int b=n-a;
        int res=a*2+b;
        cout<<res<<endl;;
    }
    return 0;
}
