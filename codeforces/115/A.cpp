#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res = 0;
ll a[N];
vector<ll> v[N];
ll visited[N] = {0};

ll dfs(ll node, ll cnt) {

    ll re = cnt;

    for(int i = 0 ; i < v[node].size() ; i++) {
        ll x = v[node][i];
        re = max(dfs(x , cnt + 1) , re);
    }

    return re;
}

void solve(){
    ll n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        ll x;
        cin>>x;
        if(x == -1) {
            continue;
        }
        else {
            v[x].push_back(i);
        }
    }

    ll max1 = 0;
    for (int i = 1; i <= n; ++i)
    {
        max1 = max(max1 , dfs(i , 1));
    }
    cout<<max1;
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