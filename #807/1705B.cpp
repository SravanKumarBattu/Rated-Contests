#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--) {

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = 0;
    int ptr = 0;

    while(ptr < n && a[ptr] == 0)
        ptr++;
    for(int i = ptr; i < n-1; ++i){
        ans += a[i];
        if(a[i] == 0) ans++;
    }
    cout << ans << "\n";
    }
}
