#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res = 0;
ll a[N];
vector<ll> v[N];
ll visited[N] = {0};
ll cats ;

void dfs(ll x , ll cnt) {
    if(a[x]) {
        cnt++;
        if(cnt > cats) 
            return;
    }
    else
        cnt = 0;

    visited[x] = 1;

    for(auto i : v[x]) {
        if(!visited[i]) 
            dfs(i , cnt);
    }
    if(v[x].size() == 1 && x != 1)
        res++;
    return;
}

void solve(){
    ll n;
    cin>>n>>cats;
    a[0] = -1;
    for (int i = 1; i <= n; ++i)
       {
           cin>>a[i];
       }   
   for (int i = 0; i < n - 1; ++i)
   {
       ll x , y;
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
   }

   dfs(1 , 0);
   cout<<res<<"\n";
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