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
  for(int i = 0; i < n ;i++) {
    cin>>arr[i];
  }

  vector<ll> pre(n);
  pre[0] = 0;
  ll mx = arr[0];
  for(int i = 1; i < n ;i++) {
    if(mx > arr[i]) {
      pre[i] = mx - arr[i];
    } else {
      mx = max(mx , arr[i]);
    }
  }

  ll ans = 0;
  stack<ll> st;
  mx = arr[n-1];
  ll k = 0;
  for(int i = n - 2; i >= 0; i--) {
    if(arr[i] <= arr[i+1]) continue;
    ans += arr[i] - arr[i+1];
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