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
ll n , k;
string s , ss;

void solve(){
  cin>>n>>k;
  cin>>s;

  map<ll, set<char>> mp;
  for(int i = 0; i < n ; i++) {
    mp[i%k].insert(s[i]);
  }

  for(int i = 0; i < k ; i++) {
    if(mp[i].count('0') && mp[i].count('1')) {
      cout<<"NO\n";
      return;
    }
  }

  ll on = 0, zo = 0;
  for(int i = 0; i < k ; i++) {
    if(mp[i].count('0'))
      zo++;
    if(mp[i].count('1'))
      on++;
  }
  if(on * 2 > k || zo * 2 > k) {
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
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