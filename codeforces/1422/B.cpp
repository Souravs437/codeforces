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
  ll n , m;
  cin >> n >> m;
  vector<ll> mat[n];
  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < m ; j++) {
      ll x; cin >> x;
      mat[i].pb(x);
    }
  }

  ll ans = 0;
  for(int i = 0 ; i < n/2 ; i++) {
    for(int j = 0; j < m/2 ; j++) {
      ll curr = INT_MAX;
      vector<ll> temp(4);
      temp[0] = mat[i][j];
      temp[1] = mat[i][m-1-j];
      temp[2] = mat[n-i-1][j];
      temp[3] = mat[n-i-1][m-j-1];
      for(int k = 0; k < 4 ; k++) {
        ll val = temp[k];
        curr = min(curr , abs(val - mat[i][j]) + abs(val - mat[i][m-1-j]) + abs(val - mat[n-i-1][j]) + abs(val - mat[n-i-1][m-j-1]));
      }
      ans += curr;
    }
  }

  if(n%2) {
    ll idx = n/2;
    for(int i = 0; i < m / 2 ; i++) {


      ans += abs(mat[idx][i]  - mat[idx][m-i-1]);
     
    }
  }
  if(m%2) {
    ll idx = (m)/2;
    for(int i = 0; i < n / 2 ; i++) {
      ans += abs( mat[i][idx] - mat[n-i-1][idx]);
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