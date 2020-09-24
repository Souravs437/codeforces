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
  vector<ll> arr(n);
  for(int i = 0; i < n ; i++) {
    cin>>arr[i];
  }
  ll ans = 0;
  map<ll , ll> mp;
  for(int i = 0; i < n ; i++) {
    for(int k = 40 ; k >= 0; k--) {
      if((arr[i] & (1LL << k))) {
        mp[k]++;
        break;
      }
    }
  }

  for(auto i : mp) {
    ans += (i.second * (i.second - 1)/2);
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