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
  ll n;
  cin>>n;
  vector<ll> arr(n);
  for(int i = 0; i < n ; i++) {
    cin>>arr[i];
  }

  if(n < 3) {
    cout<<"0\n";
    for(auto i : arr) {
      cout<<i<<" ";
    }
    cout<<"\n";
    return;
  }
  sort(all(arr));

  ll ptrh = 0 , ptrt = n/2;
  ll tt = 0;
  vector<ll> brr(n);
  int  k = 0;
  while(ptrt < n) {
    if(tt) {
      brr[k++] = arr[ptrh++];
      tt = 0;
    } else {
      brr[k++] = arr[ptrt++];
      tt = 1;
    }
  }
  while(ptrh < n/2) {
    brr[k++] = arr[ptrh++];
  }
  for(int i = 1; i < n - 1; i++) {
    if(brr[i] < brr[i-1] && brr[i] < brr[i+1]) {
      res++;
    }
  }
  cout<<res<<"\n";
  for(auto i : brr) {
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