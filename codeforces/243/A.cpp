//SkGeN
#include<iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<cstring>
#include<climits>
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> p64;
typedef vector<ll> v64;
const int N = 2 * 1e5 + 10;
const ll inf = 1e18 + 100;
const ll mod = 1e9 + 7;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void  solve() {
    ll n;
    cin>>n;
    vector<ll> A;
    for(int i = 0; i < n ; i++) {
        ll x; cin>>x;
        A.pb(x);
    }
  vector<int> c;
  for (auto i = 0, st = 0, en = 0; i < A.size(); ++i, st = en, en = c.size()) {
    c.push_back(A[i]);
    for (auto j = st; j < en; ++j)
      if (c.back() != (c[j] | A[i])) c.push_back(c[j] | A[i]);
  }
  ll val =  unordered_set<int>(begin(c), end(c)).size();
    cout<<val<<"\n";
}
int main()
{
    DANGER;
    ll t = 1;
    //cin>>t;
    while(t--) {
        solve();
        }
return 0;
}
//---->O ,,