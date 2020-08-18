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

ll res , n;
ll a[N];
vector<ll> ed[N];
ll dp[N][20] , lvl[N] , sz[N];
ll tin[N] , tout[N];
ll tmr;
void dfs(ll node, ll par = 0 , ll d= 0) {
  tin[node] = tmr++;
  lvl[node] = d;
  sz[node] = 1;
  dp[node][0] = par;
  for(int i = 1; i < 20; i++) {
    dp[node][i] = dp[dp[node][i-1]][i-1];
  }

  for(auto i : ed[node]) {
    if(i != par) {
      dfs(i , node , d + 1);
      sz[node] += sz[i];
    }
  }
  tout[node] = tmr++;
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

bool is_anc(ll a , ll b) {
  if(tin[a] <= tin[b] && tout[a] >= tout[b]) {
    return 1;
  }
  return 0;
}

ll go_up(ll u , ll v) {
  for(int i = 19 ; i >= 0 ; i--) {
    if(!is_anc(dp[u][i] , v) && dp[u][i] != 0) {
      u = dp[u][i];
    }
  }
  return u;
}

ll get_ans(ll u , ll v) {
  ll _lca = lca(u,v);
  if(u == v) {
    return n;
  } else if(lvl[u] - lvl[_lca] == lvl[v] - lvl[_lca]) {
    u = go_up(u, _lca);
    v = go_up(v, _lca);
    return n - sz[u] - sz[v];
  } else {
    ll dis = lvl[u] + lvl[v] - 2*lvl[_lca];
    if(dis % 2) {
      return 0;
    } 
    if(lvl[u] < lvl[v])
      swap(u,v);

    ll to = u;

    dis /= 2;
    for(int i = 19 ; i >= 0; i--) {
      if(lvl[u] - lvl[dp[to][i]] < dis) {
        to = dp[to][i];
      }
    }

    return sz[dp[to][0]] - sz[to];
  }
  return 0;
}

void solve(){
  cin>>n;
  for(int i = 0; i < n - 1; i++) {
    ll u , v;
    cin>>u>>v;
    ed[u].pb(v);
    ed[v].pb(u);
  }
  dfs(1);

  ll q;
  cin>>q;
  for(int i = 0; i < q ; i++) {
    ll u , v;
    cin>>u>>v;
    cout<<get_ans(u,v)<<"\n";
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