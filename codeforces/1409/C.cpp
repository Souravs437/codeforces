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
  ll n , x, y;
  cin>>n>>x>>y;
  // if(y <= n) {
  //   if(x == y) {
  //     for(int i = 0; i < n ; i++) {
  //       cout<<x<<" ";
  //     }
  //     cout<<"\n";
  //   } else {
  //     for(int i = 1; i <= n ; i++) {
  //       cout<<i<<" ";
  //     }
  //     cout<<"\n";
  //   }
  // } else {

  // }
  ll diff = -1, st = -1;
  for(int i = 0; i <= 50; i++) {
    bool fl = 0;
    for(int j = 1; j <= x ; j++) {
      ll val = j;
      ll a = 0 , b = 0, temp = 0 ;
      while(temp++ < n) {
        //cout<<val<<" ";
        if(val == x) {
          a = 1;
        }
        if(val == y){
          b = 1;
        }
        if(a && b) {
          //cout<<a<<" "<<b<<" "<<i<<" "<<j<<"\n";
          diff = i;
          st = j;
          break;
        }
        val += i;
      }
      //cout<<"\n";
      if(a && b) {
        fl = 1;
        break;
      }
    }
    if(fl) {
      break;
    }
  }

  for(int i = 0; i < n ; i++) {
    cout<<st<<" ";
    st += diff;
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