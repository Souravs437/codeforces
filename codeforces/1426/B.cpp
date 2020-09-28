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


void solve(){
  ll n , x;
  cin >> n >> x;

  
  bool fl = 0;
  for(int i = 0; i < n; i++) {
    vector<ll> vec[2];
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k ++) {
        ll x;cin >> x;
        vec[j].pb(x);
      }
    }

    if(vec[1][0] == vec[0][1]) {
      fl = 1;
    }
  }

  if(x%2 || !fl) {
    cout<<"NO\n";
  } else {
    cout<<"YES\n";
  }
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