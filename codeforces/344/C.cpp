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

ll go(ll a, ll b) {
  if(a == 1) {
    return b;
  }
  if(a > b) {
    return  a/b + go(a%b, b);
  } else {
    return go(b,a);
  }
}

void solve(){
  ll a, b;
  cin>>a>>b;
  cout<<go(a,b)<<"\n";
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