#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll k, n, s, p, x;
    cin>>k>>n>>s>>p;
    x = n%s == 0 ? n/s :n/s+1;
    ll ans = (x*k) % p == 0?(x*k)/p : (x*k)/p +1;
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