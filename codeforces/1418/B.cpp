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
  for(int i =0 ; i < n ; i++) {
    cin>>arr[i];
  }
  vector<ll> pos(n);
  for(int i = 0; i < n ; i++) {
    cin>>pos[i];
  }

  vector<ll> aa;
  for(int i = 0; i < n ; i++) {
    if(!pos[i]) {
      aa.pb(arr[i]);
    }
  }

  sort(all(aa));

  for(int i = 0; i < n ; i++) {
    if(!pos[i]) {
      arr[i] = aa.back();
      aa.pop_back();
    }
  }
  ll sum = arr[0];
  cout<<arr[0]<<" ";
  for(int i = 1; i < n ; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
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