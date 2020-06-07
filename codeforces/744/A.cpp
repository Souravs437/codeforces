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

#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll n , m , k;
vector<ll> arr;
vector<ll> ed[N];

ll nc(ll x) {
	return (x) * (x - 1) / 2; 
}

ll vis[N];

ll dfs(int node) {
	if(vis[node]) {
		return 0;
	}
	ll cnt = 1;
	vis[node] = 1;

	for(auto i : ed[node]) {
		cnt += dfs(i);
	}

	return cnt;
}

void solve() {
	cin>>n>>m>>k;
	for(int i = 0; i < k ; i++) {
		ll x ; cin>>x;
		arr.pb(x);
	}


	for(int i = 0 ; i < m ; i++) {
		ll u, v ;
		cin>>u>>v;
		ed[u].pb(v);
		ed[v].pb(u);
	}

	map<ll,ll> sz;

	for(int i = 0; i < k; i++) {
		sz[arr[i]] = dfs(arr[i]);
	}

	ll all = n , ans = 0 , mm = 0; 
	for(int i = 0 ; i < k ; i++) {
		mm = max(mm , sz[arr[i]]);
		ans += nc(sz[arr[i]]);
		all -= sz[arr[i]];
	}
	ans += nc(all);
	ans -= m;
	ans += all * mm;
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