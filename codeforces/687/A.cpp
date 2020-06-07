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

ll n , m;
vector<ll> ed[N];
ll ok = 0;
ll vis[N];

void dfs(int node , int t) {
	if(vis[node]) {
		if(vis[node] != t) {
			ok = 1;
		}
		return;
	}

	vis[node] = t;
	if(t == 1) {
		t = 2;
	} else {
		t = 1;
	}

	for(auto i : ed[node]) {
		dfs(i , t);
	}
}

void solve() {
	cin>>n>>m;
	for(int i = 0; i < m; i++) {
		ll u , v;
		cin>>u >> v;
		ed[u].pb(v);
		ed[v].pb(u);
	}

	for(int i = 1; i <= n ; i++) {
		if(!vis[i]) {
			dfs(i,1);
		}
	}

	vector<ll> ans1 , ans2;

	if(ok) {
		cout<<-1<<"\n";
		return;
	}
	for(int i = 1 ; i <= n ; i++) {
		if(vis[i] == 1) {
			ans1.pb(i);
		} else {
			ans2.pb(i);
		}
	}

	cout<<ans1.size()<<"\n";
	for(auto i : ans1) {
		cout<<i<<" ";
	}
	cout<<"\n"<<ans2.size()<<"\n";
	for(auto i : ans2) {
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