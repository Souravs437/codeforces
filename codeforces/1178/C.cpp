#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll m = 998244353;

long long binpow(ll a, ll b) {
    a %= m;
    long long rest = 1;
    while (b > 0) {
        if (b & 1)
            rest = rest * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return rest;
}

void solve(){
    ll x , y;
    cin>>x>>y;
    res = x + y;

    ll ans = binpow(2 , res);
    cout<<ans<<"\n";
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