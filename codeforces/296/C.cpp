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

struct node {
  ll l, r, d;
  node() {}
  node(ll L, ll R, ll D) {
    l = L, r = R , d = D;
  }
};

void solve(){
  ll n, m , k;
  cin>>n>>m>>k;
  vector<ll> v(n);
  for(int i = 0; i < n ; i++) {
    cin>>v[i];
  }

  vector<node> que(m);
  for(int i = 0; i < m ; i++) {
    ll l , r, d;
    cin>>l >> r >> d;
    que[i] = node(l - 1 , r, d);
  }

  vector<ll> pre(m+1);
  for(int i = 0; i < k ; i++) {
    ll x , y;
    cin>>x>>y;
    x -- , y--;
    pre[x] += 1, pre[y+1] -= 1;
  } 

  for(int i = 1; i < m + 1; i++) {
    pre[i] += pre[i-1];
  }


  vector<ll> vv(n+1);
  for(int i = 0 ; i < m ; i++) {
    vv[que[i].l] += que[i].d*pre[i];
    vv[que[i].r] -= que[i].d*pre[i];

  }
  for(int i = 1; i < n + 1 ; i++) {
    vv[i] += vv[i-1];
  }
  for(int i = 0; i < n ; i++) {
    v[i] += vv[i];
  }
  for(auto i : v) {
    cout<<i<<" ";
  }
  cout<<"\n";
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