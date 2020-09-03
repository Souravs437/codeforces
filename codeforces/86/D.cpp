#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;
const int MXN = 1e6+10;
const int N =  1e6 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll freq[N];
ll n, m;
ll sz;



inline bool cmp(pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b) {
  if(a.first.first/sz == b.first.first/sz) {
    return a.first.second < b.first.second; 
  } else {
    return a.first.first < b.first.first;
  }
}

inline void add(ll x) {
  res -= freq[x]*freq[x] *x;
  freq[x]++;
  res += freq[x]*freq[x]*x;
}
inline void sub(ll x) {
  res -= freq[x]*freq[x] *x;
  freq[x]--;
  res += freq[x]*freq[x]*x;
}

inline void update(ll idx, ll tp) {
  if(tp) {
    add(idx);
  } else {
    sub(idx);
  }
}

void solve(){
  cin>>n>>m;
  vector<ll> arr(n+1);
  vector<pair<pair<ll,ll>,ll>> quer;
  sz = sqrt(n) + 1;
  for(int i = 1; i <= n ; i++) {
    cin>>arr[i];
  }

  for(int i =0 ;i < m ; i++) {
    ll l , r;
    cin>>l>>r;
    quer.pb({{l,r},i});
  }

  sort(all(quer) , cmp);

  vector<ll> ans(m);
  ll cl = 1,cr = 0;
  for(int i = 0; i < m; i++) {
    ll l = quer[i].first.first , r = quer[i].first.second , idx = quer[i].second;
    //cout<<l<<" "<<r<<" "<<idx<<"\n";
    //cout<<cl<<" "<<cr<<"\n";
    while(cl < l) {
      update(arr[cl++] , 0);
    }
    while(cr > r) {
      update(arr[cr--] , 0);
    }
    while(cl > l) {
      update(arr[--cl] , 1);
    }
    while(cr < r) {
      update(arr[++cr],1);
    }
    ans[idx] = res;
  }

  for(auto i : ans) {
    cout<<i<<"\n";
  }

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