#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll n;
ll res;
ll inc[N], decr[N], a[N];
vector<ll> gp[N];


void dfs(ll u, ll par = -1) {
  ll ci = 0, cd = 0;
  for(auto v : gp[u]) {
    if(v == par) continue;

    dfs(v, u);
    ci = max(ci, inc[v]);
    cd = max(cd ,decr[v]);
  }

  ll val = ci - cd + a[u];
  inc[u] = ci + max(-val , 0LL);
  decr[u] = cd + max(val , 0LL);
}


void solve(){
  cin >> n;
  for(int i = 0; i < n - 1; i++) {
    ll u, v;
    cin>>u>>v;
    gp[u].pb(v);
    gp[v].pb(u);
  }

  for(int i = 1; i < n + 1; i++) {
    cin>>a[i];
  }

  dfs(1);
  cout<<inc[1] + decr[1]<<"\n";
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