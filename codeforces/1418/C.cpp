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
ll n;
ll dp[N][4];

ll go(ll idx , ll tt) {
  if(idx >= n) {
    return 0;
  } 
  if(dp[idx][tt] +  1) {
    return dp[idx][tt];
  }
  if(!tt) {
    ll xx = a[idx] + go(idx + 1, tt + 1);
    ll yy = a[idx] + min(go(idx + 2 , 0) , go(idx + 3 , 0));
    return dp[idx][tt] = min(xx,yy);
  } else {
    return dp[idx][tt] = a[idx] + min(go(idx+2 , 0) , go(idx + 3 , 0));
  }
}

void solve(){
  cin>>n;
  for(int i = 0; i < n ; i++) {
    cin>>a[i];
  }

  for(int i = 0; i < n + 1; i++) {
    for(int j = 0; j < 3; j++) {
      dp[i][j] = -1;
    }
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