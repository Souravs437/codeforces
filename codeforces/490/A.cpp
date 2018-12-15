#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    std::vector<ll> v[10];
    ll x , ans, n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        v[x].push_back(i + 1);
    }
    ans = min(v[1].size() , min(v[2].size() , v[3].size()));
    cout<<ans<<"\n";
    auto i1 = v[1].begin();
    auto i2 = v[2].begin();
    auto i3 = v[3].begin();
    for (int i = 0; i < ans; ++i)
    {
        cout<<*i1<<" "<<*i2<<" "<<*i3<<"\n";
        i1++;
        i2++;
        i3++;
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