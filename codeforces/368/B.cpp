#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, cumm[N] , query;
    cin>>n>>query;
    set<ll> s;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = n; i > 0; --i)
    {
        s.insert(a[i-1]);
        cumm[i-1] = s.size();
    }
    while(query--) {
        ll x;
        cin>>x;
        cout<<cumm[x-1]<<"\n";
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