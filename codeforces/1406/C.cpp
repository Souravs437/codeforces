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
ll n;
ll a[N];
vector<ll> gp[N];
vector<ll> cn;
ll sz[N];

void dfs(ll root, ll p = -1) {
  sz[root] = 1;
  bool is_centroid = true;
  for(auto i : gp[root]) {
    if(p != i) {
      dfs(i , root);
      sz[root] += sz[i];
      if (sz[i] > n / 2) is_centroid = false;
    }
  }   
  if (n - sz[root] > n / 2) is_centroid = false;
  if (is_centroid) cn.push_back(root);
}

void solve(){
  cin>>n;
  for(int i = 1; i < n + 1; i++) {
    gp[i].clear();
    sz[i] = 0;
  }
  for(int i = 1; i < n ; i++) {
    ll u , v;
    cin>>u>>v;
    gp[u].pb(v);
    gp[v].pb(u);
  }
  cn.clear();

  dfs(1);

  if(cn.size() == 1) {
    cout<<cn[0]<<" "<<gp[cn[0]][0]<<"\n";
    cout<<cn[0]<<" "<<gp[cn[0]][0]<<"\n";
    return;
  }

  ll itr;
  for(auto i : gp[cn[0]]) {
    if(i != cn[1]) {
      itr = i;
      break;
    }
  }

  cout<<itr<<" "<<cn[0]<<"\n";
  cout<<itr<<" "<<cn[1]<<"\n";
}

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
  ll t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}