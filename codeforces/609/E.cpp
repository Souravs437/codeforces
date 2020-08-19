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
ll par[N];
ll b[2*N];
ll arr[2*N];
ll n , m , tmr;
vector<pair<pair<int,int>, int>> ed;
vector<pair<int,int>> kgf[N];
void make_par(ll n) {
  for(int i = 0 ; i < n + 1; i++) {
    par[i] = i;
  }
} 

ll root(ll x){
  while(x != par[x]){
    par[x] = par[par[x]];
    x = par[x];
  }
  return x;
}



void join(ll x, ll y){
  par[root(y)] = par[root(x)];
}

/*----------dsu-------*/
ll up[N][20] , dp[N][20] , lvl[N] , W;
void dfs(ll node , ll par = 0) {
  for(auto i : kgf[node]) {
    if(i.first != par) {
      up[i.first][0] = node, dp[i.first][0] = i.second;
      lvl[i.first] = lvl[node] + 1;
      for(int j = 1; j < 20 ; j++) {
        up[i.first][j] = up[up[i.first][j-1]][j-1];
        dp[i.first][j] = max(dp[i.first][j-1] , dp[up[i.first][j-1]][j-1]);
      }
      W += i.second;
      dfs(i.first , node);
    }
  }

}

map<pair<ll,ll> , ll> mp;

void kruskal() {
  for(auto i : ed) {
    ll wt = i.first.first;
    ll u = i.first.second;
    ll v = i.second;
    //cout<<u<<" "<<v<<" \t"<<root(u)<<" "<<root(v)<<"\n";
    if(root(u) != root(v)) {
      join(u,v);
      mp[{u,v}] = mp[{v,u}] = wt;
      kgf[u].pb({v,wt});
      kgf[v].pb({u,wt});
    }
  }
}

/*----------------kruskal--------------------*/


vector<pair<pair<int, int> , int>> qry;

ll query(pair<pair<ll,ll> , ll> nn) {
  ll u = nn.first.first , v = nn.first.second;
  ll ww = nn.second;
  if(lvl[u] < lvl[v]) swap(u,v);

  ll diff = lvl[u] - lvl[v];
  ll xx = 0;
  for(int i = 19 ; i >= 0 ; i--) {
    if((1 << i) & diff) {
      xx = max(xx , dp[u][i]);
      u = up[u][i];
    }
  }
  for(int i = 19;  i >= 0; i--) {
    if(up[u][i] != up[v][i]) {
      xx = max(xx , max(dp[u][i] , dp[v][i]));
      u = up[u][i];
      v = up[v][i];
    }
  }

  if(u != v) {
    xx = max(xx , max(dp[u][0] , dp[v][0]));
  }

  return W - xx + ww;
}
void solve(){
  cin>>n>>m;
  make_par(n);
  for(int i = 0; i < m ; i++) {
    ll u , v, wt;
    cin>>u>>v>>wt;
    
    ed.push_back({{wt,v} , u});
    qry.push_back({{u,v} , wt});
  }

  sort(all(ed));

  kruskal();
  dfs(1);

  //cout<<query({{2,3},27})<<"\n";

  for(auto i : qry) {
    cout<<query(i)<<"\n";
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