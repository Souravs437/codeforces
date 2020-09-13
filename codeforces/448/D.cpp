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

ll chk(ll x, ll n, ll m) {
  ll ans = 0;
  for(int i = 1; i <= n ; i++) {
    ans += min(x / i , m);
  }
  return ans;
}

void solve(){
  ll n , m , k;
  cin>>n>>m>>k;
  ll lo = 0, hi = n * m + 1;
  while(lo + 1 < hi) {
    ll mid = (lo + hi) >> 1;
    if(chk(mid, n, m) < k) lo = mid;
    else hi = mid;
  }

  cout<<hi<<"\n";
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