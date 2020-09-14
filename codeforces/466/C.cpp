#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 6 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll bit[N];

void upd(ll idx) {
  while(idx < N) {
    bit[idx] += 1;
    idx += idx & -idx;
  }
}

ll summ(ll idx) {
  ll val = 0;
  while(idx > 0) {
    val += bit[idx];
    idx -= idx & -idx;
  }
  return val;
}

void solve(){
  ll n;
  cin>>n;
  vector<ll> arr(n);
  ll sum = 0;
  for(int i = 0; i < n ; i++) {
    cin>>arr[i];
    sum += arr[i];
  }

  if(sum%3) {
    cout<<0<<"\n";
    return;
  } else {
    sum /= 3;
  }

  ll xx = 0;
  for(int i = 0; i < n ; i++) {
    xx += arr[i];
    if(xx == sum) {
  
      upd(i+1);
    }
  }
 

  xx = 0;
  for(int i = n - 1; i >= 0; i--) {
    xx += arr[i];
    if(xx == sum) {
      res += summ(i-1);
    }
  }

  cout<<res<<"\n";
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