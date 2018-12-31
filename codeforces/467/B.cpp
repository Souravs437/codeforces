#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];

ll count_bit(ll x)
{
    ll count = 0;
    while(x)
    {
        if(x&1)
            count++;
        x = x>>1;
    }
    return count;
}


void solve(){
    ll n, m, k, count(0);
    vector<ll> s;
    cin>>n>>m>>k;
    for (int i = 0; i <= m; ++i)
    {
        ll x;
        cin>>x;
        s.push_back(x);
    }
    res = s.back();
    for (int i = 0; i < m; ++i)
    {
        ll temp = res^s[i];
        ll ans = count_bit(temp);
        if(ans <= k)
            count++;
    }
    cout<<count;
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