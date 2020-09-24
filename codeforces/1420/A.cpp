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
ll MXN;
ll sum(ll idx, vector<ll> &bit) {
  ll val = 0;
  while(idx > 0) {
    val += bit[idx];
    idx -= idx &-idx;
  }
  return val;
}

void upd(ll idx , vector<ll> &bit) {
  while(idx < MXN) {
    bit[idx] += 1;
    idx += idx &-idx;
  }
}

void solve(){
  ll n;cin>>n;
  vector<ll> arr(n);
  for(int i = 0; i < n ; i++) {
    cin>>arr[i];
  }
  bool fl = 0;
  for(int i = 0 ; i < n  - 1 ;i++) {
    if(arr[i] <= arr[i+1]) {
      fl = 1;
    }
  }

  if(fl) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }

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