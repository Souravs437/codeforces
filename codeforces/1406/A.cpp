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


void solve(){
  ll n;
  cin>>n;
  vector<ll> arr(200);
  for(int i = 0 ; i < n ; i++) {
    ll x; cin>>x;
    arr[x]++;
  }

  ll ans = 0;
  for(int i = 0; i < 111; i ++) {
    if(arr[i]) {
      arr[i]--;
    } else {
      ans += i;
      break;
    }
  } 
  for(int i = 0; i < 112; i++) {
    if(arr[i]) {
      arr[i]--;
    } else {
      ans += i;
      break;
    }
  }
  cout<<ans<<"\n";
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