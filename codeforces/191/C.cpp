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

ll res;
ll a[N];
vector<ll> ed[N];
ll dp[N][20] , lvl[N] , cnt[N];

void dfs(ll node, ll par = 0) {
  lvl[node] = lvl[par] + 1;
  dp[node][0] = par;
  for(int i = 1; i < 20; i++) {
    dp[node][i] = dp[dp[node][i-1]][i-1];
  }

  for(auto i : ed[node]) {
    if(i != par) {
      dfs(i , node);
    }
  }
}

ll lca(ll u , ll v) {
  if(lvl[u] < lvl[v]) {
    swap(u,v);
  }

  ll diff = lvl[u] - lvl[v];

  for(int i = 0 ; i < 20 ; i++) {
    if((1 << i) & diff) {
      u = dp[u][i];
    }
  }

  if(u == v) {
    return u;
  }

  for(int i = 19 ; i >= 0; i--) {
    if(dp[u][i] != dp[v][i]) {
      u = dp[u][i];
      v = dp[v][i];
    }
  }

  return dp[u][0];
}

void sum(ll node , ll par = 0) {
  for(auto v : ed[node]) {
    if(v != par) {
      sum(v, node);
      cnt[node] += cnt[v];
    }
  } 
}

void solve(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>> vv;
  for(int i = 0; i < n - 1; i++) {
    ll u , v;
    cin>>u>>v;
    ed[u].pb(v);
    ed[v].pb(u);
    vv.pb({u,v});
  }

  dfs(1);

  ll q; 
  cin>>q;
  for(int i = 0; i < q; i++) {
    ll u , v;
    cin>>u>>v;
    cnt[u]++,cnt[v]++;
    cnt[lca(u,v)] -= 2;
  }


  sum(1);

  for(auto node : vv) {
    ll u = node.first , v = node.second;
    if(lvl[u] < lvl[v]) 
      swap(u,v);

    cout<<cnt[u]<<" ";
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