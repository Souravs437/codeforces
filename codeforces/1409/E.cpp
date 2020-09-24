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
ll n , k;
ll x[N];

ll dp[N+10][3];

ll go(ll idx, ll tt) {

  if(idx >= n) {
    return 0;
  }

  if(tt == 2) {
    return 0;
  }
  if(dp[idx][tt] + 1) {
    return dp[idx][tt];
  }
  ll lo = idx , hi = n ;
  while(lo + 1 < hi) {
    ll mid = (lo + hi) >> 1;
    ll xx = x[mid] - x[idx];
    if(xx <= k) {
      lo = mid;
    } else {
      hi = mid;
    }
  }

  ll xx = lo - idx + 1 + go(lo+1, tt + 1);
  ll yy = go(idx + 1, tt);
  return dp[idx][tt] = max(xx , yy);
}

void solve() {
  cin>>n>>k;
  for(int i = 0; i < n + 1; i++) {
    for(int j = 0; j < 3; j++) {
      dp[i][j] = -1;
    }
  }
  for(int i = 0; i < n ; i++) {
    cin>>x[i];
  }

  for(int i = 0; i < n ; i++) {
    ll x;
    cin>>x;
  }

  sort(x , x + n);
  cout<<go(0,0)<<"\n";
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