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

void solve() {
	ll n;
	cin>>n;
	map<ll,ll> mp;
	vector<ll> arr(n);
	for(int i = 0; i < n ; i++) {
		ll x; cin>>x;
		bitset<33> a(x);
		arr[i] = x;
		for(int j = 0 ; j < a.size() ; j++) {
			mp[j] += a[j];
		}
	}
	int bit = -1;
	for(int i = 32 ; i >= 0 ; i--) {
		if(mp[i] == 1) {
			bit = i;
			break;
		}
	}

	if(bit == -1) {
		for(auto i : arr) {
			cout<<i<<" ";
		}
		return;
	}

	vector<ll> sol;
	ll ans = 0;
	for(int i = 0 ; i < n ; i++) {
		bitset<33> a(arr[i]);
		if(a[bit]) {
			ans = arr[i];
			continue;
		} else {
			sol.pb(arr[i]);
		}
	}

	cout<<ans<<" ";
	for(auto i : sol) {
		cout<<i<<" ";
	}


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