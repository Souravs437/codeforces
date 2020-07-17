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
ll n , m , k;
vector<ll> arr;
ll chk[20][20];
ll dp[20][1<<20];
ll go(ll prev, ll mask , ll cnt = 0) {
	if(cnt == m) {
		return 0;
	}
	if(dp[prev][mask] + 1) {
		return dp[prev][mask];
	}
	ll ans = 0;
	for(int i = 0; i < n ; i++) {
		if(!((1LL << i)&mask)) {
			ll xx = go( i+1, mask | (1 << i) , cnt + 1) + chk[prev][i+1] + arr[i];
			ans = max(ans , xx);
		}
	}

	return dp[prev][mask] = ans;
}

void solve() {
	cin>>n>>m>>k;
	mem(dp , -1);
	for(int i = 0 ; i < n ; i++) {
		ll x; cin>>x;
		arr.pb(x);
	}
	
	for(int i = 0; i < k ; i++) {
		ll x, y,  c;
		cin>>x>>y>>c;
		chk[x][y] = c;
	}
	ll ans = go(0,0);
	cout<<ans;
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