#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;
const ll N = 5e7 + 10;
const ll M = 2e5 + 10;
const ll inf = 1e18 + 9; 

ll res;
ll arr[M];

ll power(ll a , ll b) {
  ll re = 1;
  while(b) {
    if(b&1) {
      re = (1LL *re*a);
    }
    a = (1LL * a * a);
    b>>=1;
  }
  return re;
}

void solve(){
  ll n;
  cin>>n;

  for(int i = 0 ; i < n ; i++) {
    cin>>arr[i];
  }

  ll ans = 1e15;
  sort(arr , arr + n);

  ll k = N/n;
  for(ll i = 1; i <= k ; i++) {
    ll val  =0;
    for(ll j = 0; j < n ; j++) {
      ll tt = abs(power(i , j) - arr[j]);
      if(tt > inf) {
        val = inf;
        break;
      } else {
        val += tt;
      }
    }

    ans = min(ans , val);
  }

  cout<<ans<<"\n";
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