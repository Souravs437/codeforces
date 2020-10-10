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
  ll n , k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<ll> arr[2];
  arr[0].pb(-1);
  arr[1].pb(-1);
  for(int i = 0; i < n ; i++) {
    if(s[i] == 'W') {
      arr[0].pb(i);
    } else {
      arr[1].pb(i);
    }
  }
  vector<pair<ll,pair<ll,ll>>> diff;
  for(int i = 1; i < arr[0].size() - 1; i++) {
    diff.pb({arr[0][i+1] - arr[0][i] - 1 , {arr[0][i] , arr[0][i+1]}});
  }

  sort(all(diff));

  // for(int i = 0; i < diff.size() ; i++) {
  //   cout<<diff[i].first <<" "<<diff[i].second.first<<" "<<diff[i].second.second<<"\n";
  // }

  for(int i = 0; i < diff.size() ; i++) {
    if(k == 0) break;
    if(diff[i].first <= k) {
      for(int j = diff[i].second.first + 1 ; j <= diff[i].second.second - 1 ; j++) {
        s[j] = 'W';
      }
      k -= diff[i].first;
    } else {
      for(int j = diff[i].second.first + 1; j < diff[i].second.first + k + 1; j++) {
        s[j] = 'W';
      }
      k = 0;
    }
  }

  if(k && arr[0].size() > 1) {

    for(int i = arr[0][1] ; i < n ; i++) {
      if(!k) break;
      if(s[i] == 'L') {
        s[i] = 'W';
        k--;
      }
    }
    for(int i = arr[0][1] ; i >= 0 ; i--) {
      if(!k) break;
      if(s[i] == 'L') {
        s[i] = 'W';
        k--;
      }
    }
  } else if(k) {

    for(int i = 0; i < n ; i++) {
      if(!k) break;
      if(s[i] == 'L') {
        s[i] = 'W';
        k--;
      }
    }
  }

  ll ans = 0 , prev = 0;

  for(int i = 0; i < n ; i++) {
    if(s[i] == 'W') {
      ans += 1 + prev;
      prev = 1;
    } else {
      prev = 0;
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