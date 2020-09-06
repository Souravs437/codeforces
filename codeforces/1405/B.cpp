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
  vector<ll> pre(n) , suff(n);
  pre[0] = arr[0];
  for(int i = 1; i < n ; i ++) {
    pre[i] = pre[i-1] + arr[i];
  }

  ll ans = 0;
  for(int i = 0; i < n ; i++) {
    if(pre[i] < 0) {
      ans = max(-pre[i] , ans);
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