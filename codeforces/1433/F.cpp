#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e2 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N][N];
ll n, m, k;
ll dp[71][71][40][70];

ll go(ll i , ll j , ll cnt , ll rem) {
  if(i == n) {
    return (rem == 0 ? 0 : -inf); 
  }
  if(j == m || cnt >= (m/2)) {
    return go(i+1, 0, 0 , rem);
  }
  if(dp[i][j][cnt][rem] + 1) {
    return dp[i][j][cnt][rem];
  }

  ll xx = go(i , j + 1, cnt , rem);
  ll yy = go(i , j + 1, cnt + 1, (rem + a[i][j])% k) + a[i][j];
  return dp[i][j][cnt][rem] = max(xx,yy);
}

void solve(){
  cin >> n >> m >> k;
  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < m ; j++) {
      cin >> a[i][j];
    }
  }
  memset(dp, -1 , sizeof dp);
  cout<<go(0,0,0,0)<<"\n";
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