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

ll n , ed;
vector<ll> edge[N];

ll vis[N];
set<ll> mm;
void dfs(int node) {
	vis[node] = 1;
	cout<<node<<" ";
	for(auto i : edge[node]) {
		if(!vis[i]) {
			//cout<<i<<" \n";
			mm.insert(i);
		}
	}
	if(mm.empty()) {
		return;
	}
	ll nn = *mm.begin();
	//cout<<-nn<<" ";
	mm.erase(nn);
	dfs(nn);
}

void solve() {
	cin>>n>>ed;
	for(int i = 0 ; i < ed; i++) {
		ll u , v;
		cin>>u>>v;
		edge[u].pb(v);
		edge[v].pb(u);
	}

	dfs(1);
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