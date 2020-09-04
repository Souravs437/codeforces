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

ll a, b , x, y, nn;

ll val (ll ax , ll by, ll n) {

  if(ax >= n) {
      ax -= n;
      n = 0;
    } else {
      n -= ax;
      ax = 0;
    }
    if(by >= n) {
      by -= n;
      n = 0;
    } else {
      n -= by;
    by = 0;
  }

  return ((x + ax) * (y + by));
}

ll val2(ll ax  ,ll by , ll n) {
    if(by >= n) {
      by -= n;
      n = 0;
    } else {
      n -= by;
      by = 0;
    }
    if(ax >= n) {
      ax -= n;
      n = 0;
    } else {
      n -= ax;
      ax = 0;
    }
    return ((x + ax) * (y + by));
}

void solve(){

  cin>>a>>b>>x>>y>>nn;
  ll ax , by;
  ax = abs(a - x);
  by = abs(b - y);
  ll ans = min(val(ax, by, nn) , val2(ax , by, nn));
  cout<<ans<<"\n";
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