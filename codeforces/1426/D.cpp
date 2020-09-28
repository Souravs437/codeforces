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


bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
  if(a.second == b.second) {
    return a.first < b.first;
  } else {
    return a.second < b.second;
  }
}

ll go(ll n) {
  map<ll , ll> mp;
  vector<pair<ll,ll>> interval;
  ll sum = 0;
  for(int i = 0 ; i < n ; i++) {
    sum += a[i];
    if(sum == 0) {
      //cout<<0<<" "<<i<<"\n";
      interval.pb({0,i});
    }

    if(mp.find(sum) != mp.end()) {
      
      interval.pb({mp[sum] + 1, i});
    }

    mp[sum] = i;
  }
  if(interval.size() == 0) {
    return 0;
  }
  sort(all(interval) , cmp);
  ll ans = 1, prev = interval[0].second;
  for(int i = 1; i < interval.size() ; i++) {
    if(prev <= interval[i].first) {
      ans++;
      prev = interval[i].second;
    }
  }
  return ans;
}

void solve(){
  ll n;
  cin >> n;
  for(int i = 0 ; i < n; i++) {
    cin >> a[i];
  }

  cout<<go(n)<<"\n";
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