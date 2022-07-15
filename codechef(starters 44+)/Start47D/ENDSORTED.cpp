#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        int pos1,pos2;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==1) pos1=i;
            if(v[i]==n) pos2=i;
        }
        int ans;

        if(pos1==0 and pos2==n-1) ans=0;
        else if(pos1==0 and pos2!=n-1) ans= n-1-pos2;
        else if(pos1!=0 and pos2==n-1) ans=pos1;
        else
        {
            ans=n-1-pos2+pos1;
            if(pos2<pos1)
            {
                ans-=1;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
