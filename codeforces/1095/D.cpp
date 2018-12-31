#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n, x, y;
    std::vector<ll> v[N];
    std::vector<ll> ans;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>x>>y;
        v[i].push_back(x);
        v[i].push_back(y);
    }
    ans.push_back(1);
    while(ans.size() <= n)
    {
        ll a, b;
        a = v[ans.back()][0] , b = v[ans.back()][1];
        if(v[a][0] == b || v[a][1] == b)
        {
            ans.push_back(a);
            ans.push_back(b);
        }
        else
        {
            ans.push_back(b);
            ans.push_back(a);
        }
    }
    for (int i = 0; i < n ; ++i)
    {
        cout<<ans[i]<<" "; 
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