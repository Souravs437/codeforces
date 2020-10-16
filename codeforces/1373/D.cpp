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

ll dp[N][3];
ll n;
vector<ll> arr;
ll go(ll idx , ll tt) {
  if(idx >= arr.size()) {
    return 0;
  }
  if(dp[idx][tt] + 1) {
    return dp[idx][tt];
  }
  ll xx = 0 , yy = 0;
  if(tt == 0) {
    xx = arr[idx] + go(idx + 2, 0);
    if(idx + 2 <= arr.size() - 1) {
      yy = arr[idx] + go(idx + 1, 1);
    } 
  } else if(tt == 1) {
    
    if(idx + 3 <= arr.size() - 1) {
      xx = arr[idx] + go(idx + 2, 1);
    } 
    if(idx + 1 <= arr.size() - 1) {
      yy = arr[idx] + go(idx + 3, 2);
    }
  } else {
    xx = arr[idx] + go(idx + 2 , 2);
  }
  return dp[idx][tt] = max(xx,yy);

}

void clear() {
  for(int i = 0; i < n + 10 ; i++) {
    dp[i][0] = dp[i][1] = dp[i][2] = -1;
  }
}

void solve(){
  cin >> n;
  clear();
  arr.clear();
  for(int i = 0; i < n; i++) {
    ll xx ; cin >> xx;
    arr.pb(xx);
  }
  ll xx = go(0,0);
  if(n%2 == 0) {
    arr.pb(0);
  }
  clear();
  reverse(all(arr));

  cout<<max(xx, go(0,0))<<"\n";
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