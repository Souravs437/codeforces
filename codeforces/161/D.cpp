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
const int N = 7 * 1e4 + 10;
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
ll n , k;
vector<ll> gp[N];
ll dp[N][510];
ll ans = 0;

void dfs(ll node , ll pv = 0) {
	dp[node][0] = 1;
	for(auto v : gp[node]) {
		if(v == pv) continue;
		dfs(v , node);
		for(int i = 1; i <= k ; i++) {
			ans += dp[node][i-1] * dp[v][k-i];
		} 
		for(int i = 1 ; i <= k ; i++) {
			dp[node][i] += dp[v][i-1];
		}
	}
}

void solve() {
	cin>>n>>k;
	for(int i = 0 ; i < n - 1; i++) {
		ll u , v;
		cin>>u>>v;
		gp[u].pb(v);
		gp[v].pb(u);
	}
	dfs(1);
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