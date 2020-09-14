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
  ll x , y, k;
  cin>>x>>y>>k;
  ll totst = k*y + k;

  ll lo = 0 , hi = 1;
  while(((hi*(x-1) + 1)) < totst) {
    hi *= 2;
  }

  while(lo + 1 < hi) {
    ll mid = (lo + hi) >> 1;
    if(mid*(x-1) + 1 < totst) {
      lo = mid;
    } else {
      hi = mid;
    }
  }

  cout<<hi + k<<"\n";

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