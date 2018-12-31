#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll ans(0), a, p, n, temp;
    ll price = 1e9;
    cin>>n;
    while(n--)
    {
        cin>>a>>p;
        temp = min(price, p);
        price = temp;
        ans += price * a;
    }
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