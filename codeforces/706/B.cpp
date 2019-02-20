#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n;
    cin>>n;
    std::vector<ll> v;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    ll count(0), tst;
    cin>>tst;
    for (int i = 0; i < tst; ++i)
    {
        ll x;
        cin>>x;
        auto upp = v.begin();
        upp = upper_bound(v.begin() , v.end() , x);
        count = upp - v.begin();
        if(v[upp - v.begin()] == x)
            count++;
        cout<<count<<"\n";
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