#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){

    ll n, ans = 0, x, count(1) ;
    cin>>n>>x;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; ++i)
    {
        if(a[i] != a[i+1])
            count++;
        else
        {
            ans = max(ans , count);
            count = 1;
        }
    }
    if(count > ans)
        ans = count;
    cout<<ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}