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
vector<ll> prime;
map<ll,bool> mp;
void prim_s() {
  prime.pb(2);
  mp[2] = 1;
  for(int i = 3; i <= 200 ; i++) {
    bool fl = 1;
    for(int j = 2 ; j < i; j++) {
      if(i%j == 0) {
        fl = 0;
        break;
      }
    }
    if(fl) {
      mp[i] = 1;
      prime.pb(i);
    }
  }
}

void solve(){
  ll n;
  cin >> n;
  ll xx = -1;
  for(int i = 0 ; i < prime.size() ; i++) {
    if(mp[prime[i] - n + 1] == 0 && prime[i] > n) {
      xx = prime[i] - n + 1;
      break;
    }
  }
  vector<vector<ll>> ans(n);
  for(int i = 0; i < n ; i++) {
    for(int j = 0 ; j < n ; j++) {
      if(i == j) ans[i].pb(xx);
      else ans[i].pb(1);
    }
  }

  for(auto i : ans) {
    for(auto j : i) {
      cout<<j <<" ";
    }
    cout<<"\n";
  }
}

int main(int argc, char const *argv[]){
  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
  ll t = 1;
  cin >> t;
  prim_s();
  while(t--){
    solve();
  }
  return 0;
}