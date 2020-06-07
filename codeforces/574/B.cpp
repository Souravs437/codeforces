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
vector<set<int>> ed(N);
ll ans = INT_MAX;
vector<ll> deg;
void dfs(int node ,int par1,int par2 ,int t ) {
	if(t == 0) {
		for(auto i : ed[node]) {
			if(i == par1) {
				ans = min(ans , deg[node] + deg[par1] + deg[par2] - 6);
				break;
			}
		}
		return;
	} 
	if(t < 0) {
		cout<<"df";
		return;
	}

	for(auto i : ed[node]) {
		if(t == 2) {
			//cout<<i<<" "<<node<<" "<<t<<"\n";
			dfs(i , node , -1 , 1);
		} else if(t == 1) {
			if(i == par1) {
				continue;
			} else {
				dfs(i,par1 , node , 0);
			}
		}
	}
}

void solve() {
	cin>>n>>m;
	deg.resize(n+1);
	for(int i = 0 ; i < m ; i++) {
		ll u , v;
		cin>>u>>v;
		deg[u]++, deg[v]++;
		ed[u].insert(v);
		ed[v].insert(u);
	}
	for(int i = 1; i <= n ; i++) {
		dfs(i , -1,-1,2);
	}
	if(ans == INT_MAX) {
		cout<<-1<<"\n";
		return;
	}
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