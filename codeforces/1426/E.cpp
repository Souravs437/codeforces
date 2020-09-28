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

ll n;
ll res;
ll a[N];
ll gomx(vector<ll> arr, vector<ll> brr) {
  if(!(arr[0] || arr[1] || arr[2] )) {
    return 0;
  } 

  ll xx = 0 , yy = 0 , zz = 0;
  ll ans = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      ll val = min(arr[i] , brr[j]);
      if(val == 0) continue;
      if(j == (i+1)%3) {
        vector<ll> art = arr;
        vector<ll> brt = brr;
        art[i] -= val;
        brt[j] -= val;
        ans = max(ans, gomx(art , brt) + val);
      } else {
        vector<ll> art = arr;
        vector<ll> brt = brr;
        art[i] -= val;
        brt[j] -= val;
        ans = max(ans , gomx(art , brt));
      }
    }
  }
  return ans;
}

ll gomn(vector<ll> arr, vector<ll> brr) {
  if(!(arr[0] || arr[1] || arr[2] )) {
    return 0;
  } 

  ll xx = 0 , yy = 0 , zz = 0;
  ll ans = INT_MAX;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      ll val = min(arr[i] , brr[j]);
      if(val == 0) continue;
      if(j == (i+1)%3) {
        vector<ll> art = arr;
        vector<ll> brt = brr;
        art[i] -= val;
        brt[j] -= val;
        ans = min(ans, gomn(art , brt) + val);
      } else{
        vector<ll> art = arr;
        vector<ll> brt = brr;
        art[i] -= val;
        brt[j] -= val;
        ans = min(ans , gomn(art , brt));
      }
    }
  }
  return ans;
}

void solve(){
  vector<ll> arr(3) , brr(3);
  ll n;
  cin >> n;
  for(int i = 0; i < 3;i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < 3; i++) {
    cin >> brr[i];
  }

  cout<<gomn(arr,brr)<<" "<<gomx(arr,brr);
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