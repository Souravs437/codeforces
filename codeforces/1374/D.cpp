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
	ll n , k;
	cin>>n>>k;
	vector<ll> arr(n);
	map<ll,ll> brr;
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
		ll val = (k - (arr[i]%k)) % k;
		if(val < 0) {
			exit(0);
		}
		brr[val]++;
	}

	// for(int i = 0 ; i < k ; i++) {
	// 	cout<<brr[i]<<" ";
	// }
	// cout<<"\n";
	ll ans = 0;
	map<ll,ll> mp;
	for(auto i : brr) {
		if(i.first == 0) continue;
		ans = max((i.second - 1) * k + i.first + 1LL, ans);
	}
	cout<<ans<<"\n";
}
int main()
{
	DANGER;
	ll t = 1;
	cin>>t;
	while(t--) {
		solve();
	}
return 0;
}
//---->O ,,