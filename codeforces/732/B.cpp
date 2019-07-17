#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll sum = 0;
ll ans[N];

void solve(){
    ll n, k;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; ++i)
    {
        ll x = a[i] + a[i-1];
        if(x < k) {
            sum += k - x;
            a[i] += k - x;
        }
    }

    cout<<sum<<"\n";
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
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