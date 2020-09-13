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
ll col[N];
ll mx, k;
vector<ll> gp[N];
ll vis[N];
map<ll , set<ll>> mp;
void dfs(ll node) {
  vis[node] = 1;
  set<ll> st;


  for(auto v : gp[node]) {
    if(vis[v]) {
      mp[col[node]].insert(col[v]);
      mp[col[v]].insert(col[node]);
    } else {
      mp[col[node]].insert(col[v]);
      mp[col[v]].insert(col[node]);
      dfs(v);
    }
  }
  if(st.size() >= mx) {
    k = (st.size() > mx ? col[node] : min(k , col[node]));
    mx = st.size();
  }
}

void solve(){
  ll n ,m;
  cin>>n>>m;
  for(int i = 0; i < n ; i++) {
    cin>>col[i+1];
    mp[col[i+1]].insert(col[i+1]);
  }

  for(int i = 0; i < m ; i++) {
    ll u , v;
    cin>>u>>v;
    gp[u].pb(v);
    gp[v].pb(u);
  }
  k = N;
  for(int i = 1; i < n + 1; i++) {
    if(!vis[i]) {
      dfs(i);
    }
  }

  for(auto i : mp) {
    if(i.second.size() > mx) {
      mx = i.second.size();
      k = i.first;
    }
  }
  cout<<k;
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