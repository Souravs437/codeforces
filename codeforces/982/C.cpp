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

vector<ll> ed[N];
ll ans = 0;
ll dfs(int node , int par = -1) {
	ll cnt = 1;
	ll val = 0;
	for(auto i : ed[node]) {
		if(i == par) continue;
		val = dfs(i , node); 
		if(val % 2 == 0) { ans ++;} else {cnt += val , val = 0;}
	}
	return cnt;
}

void solve() {
	ll n ;
	cin>>n;
	for(int i = 0 ; i < n -1; i++) {
		ll u , v;
		cin>>u>>v;
		ed[u].pb(v);
		ed[v].pb(u);
	}

	if(n % 2) {
		cout<<"-1";
		return;
	}

	dfs(1);

	cout<<ans<<"\n";
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