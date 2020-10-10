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
  cin >> n;
  vector<ll> arr(n);
  ll sum = 0;
  for(int i = 0; i < n ; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  if(sum == 0) {
    cout<<"NO\n";
    return;
  }
  if(sum > 0)
    sort(all(arr) , greater<ll>());
  else 
    sort(all(arr));
  sum = 0;
  for(int i = 0; i < n - 1; i++) {
    if(sum + arr[i] == 0) {
      swap(arr[i] , arr[i+1]);
    }
    sum += arr[i];
  }

  cout<<"YES\n";

  for(auto i : arr) {
    cout<<i <<" ";
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