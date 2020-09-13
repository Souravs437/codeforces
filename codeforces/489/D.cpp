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
vector<ll> gp[N];
ll cnt[3001];

void dfs(ll node , ll len = 0 , ll par = -1) {
 
  if(len == 2) {
    cnt[node]++;
    return;
  }
  for(auto i : gp[node]) {
    if(i == par) continue;
    dfs(i , len + 1, node);
  }
}

void solve(){
  ll n , m;
  cin>>n>>m;
  for(int i = 0; i < m ; i++) {
    ll u , v;
    cin>>u>>v;
    gp[u].pb(v);

  }

  ll ans = 0;
  for(int i = 1; i < n + 1; i++) {
    for(int j = 1; j < n + 1; j++) {
      cnt[j] = 0;
    }

    dfs(i);
 
    for(int j = 1; j < n + 1; j++) {
      if(j != i) {
        ans += cnt[j] * ( cnt[j] - 1) / 2;
      }
    }
  }
  cout<<ans<<"\n";
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