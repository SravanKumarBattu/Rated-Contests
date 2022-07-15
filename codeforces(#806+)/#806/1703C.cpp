#include<bits/stdc++.h>
using namespace std;

int d(int a)
{
    int x;
    x=a-1;
    x=x+10;
    x=x%10;
    return x;
}
int u(int &a)
{
    int x;
    x=a+1;
    x=x%10;
    return x;
}
int main()
{

        int t;
        int n,b,i,j,k,l,item;
        vector<int> f;
        string str;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>item;
            f.push_back(item);
        }
        for(int j=0;j<n;j++)
        {
             cin>>b;
             cin>>str;
             item=f[j];
             for(int l=0;l<b;l++)
             {
                    if(str[l]=='D')
                    {
                        item=u(item);
                    }
                    else
                    {
                        item=d(item);
                    }

            }
                cout<<item<<" ";
        }
        cout<<"\n";
        f.clear();
    }
    return 0;
}
