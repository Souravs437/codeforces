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
 
  sort(all(arr));

  ll fr = 1, bk = 1;
  for(int i = 0; i < 5 ; i++) {
    fr *= arr[i];
    bk *= arr[n-i-1];
  } 
  ll ans = 1 , mx = max(fr , bk);
  fr = 1;
  for(int i = 0; i < 5; i++) {
    
    fr *= arr[i];
    ll rem = n - 5 + i + 1;
    // cout<<i<<" "<<rem<<"\n";
    bk = 1;
    while(rem < n) bk*=arr[rem++];
    mx = max(mx , fr * bk);
  }
  cout<<mx<<"\n";
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