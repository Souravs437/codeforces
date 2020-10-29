#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e15 + 9; 

ll res;
ll a[N], n;
ll dp[201][300];

ll go(ll idx , ll time) {
  //cout<< idx <<" "<< time<<"\n";
  if(idx == n) {
    return 0;
  }
  if(time > 300 && idx < n) {
    return inf;
  }

  if(dp[idx][time] + 1) {
    return dp[idx][time];
  }

  ll xx = go(idx + 1, time + 1) + abs(a[idx] - time);
  ll yy = go(idx , time + 1);
  return dp[idx][time] = min(xx , yy);
}

void solve(){
  cin >> n;
  for(int i = 0; i < n ;i++) {
    cin >> a[i];
  }
  memset(dp , -1, sizeof dp);
  sort(a , a + n);
  cout<<go(0,1)<<"\n";
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