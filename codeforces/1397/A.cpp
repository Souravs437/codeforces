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
  vector<ll> arr(26);
  for(int i = 0; i < n ; i++) {
    string s;
    cin>>s;
    for(int j = 0 ; j < s.size() ; j++) {
      arr[s[j]-'a']++;
    }
  }


  for(int i = 0; i < 26 ; i++) {
    if(arr[i]%n) {
      cout<<"NO\n";
      return;
    }
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