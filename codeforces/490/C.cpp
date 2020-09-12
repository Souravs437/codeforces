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
  ll a, b;
  string s;
  cin>>s;
  cin>>a>>b;
  vector<ll> arr(s.size());
  ll curr = 0;
  for(int i = 0; i < s.size() ; i++) {
    curr = (curr *10 + (s[i] - '0')) % a;
    if(!curr && i + 1< s.size() && s[i+1] != '0') arr[i] = 1;
  }
  // for(auto i : arr) {
  //   cout<<i<<" ";
  // }
  // cout<<"\n";

  ll tt = 1;
  curr = 0;
  vector<ll> brr(s.size());
  for(int i = s.size() - 1; i >= 0; i--) {
    curr = ((s[i] - '0') * tt + curr) % b;
    if(curr == 0) brr[i] = 1;
    tt *= 10;
    tt %= b;
  }
  for(int i = 0; i < s.size() ; i++) {
    if(arr[i] && brr[i+1]) {
      cout<<"YES\n";
      cout<<s.substr(0,i+1)<<"\n"<<s.substr(i+1, s.size())<<"\n";
      return;
    }
  }
  cout<<"NO\n";
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