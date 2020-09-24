#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 4 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N];
ll n ,q;
ll dp[N][2];
ll go(ll idx , ll p) {
  if(idx == n) {
    return 0;
  }
  if(dp[idx][p] + 1) {
    return dp[idx][p];
  }
  ll xx = go(idx + 1, p);
  ll yy = go(idx + 1, !p) + (p == 0 ? a[idx] : -a[idx]);
  return dp[idx][p] = max(xx,yy);
}

void solve(){
  cin>>n>>q;
  for(int i = 0; i < n + 1 ; i++) {
    for(int j = 0 ; j < 2; j++) {
      dp[i][j] = -1;
    }
  }
  for(int i = 0; i < n ; i++) {
    cin>>a[i];
  }

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