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

vector<vector<ll>> grp;
vector<ll> order;
vector<ll> vis;

void dfs(int node) {
	if(vis[node]) {
		return ;
	}
	vis[node] = 1;
	for(auto i : grp[node]) {
		dfs(i);
	}

	order.pb(node);

}

void solve() {
	ll n , m;
	cin>>n>>m;
	grp = vector<vector<ll>>(n+1);
	order.clear();
	vis = vector<ll> (n+1,  0);
	vector<pair<ll,ll>> eds;
	for(int i = 0; i < m ; i++) {
		ll t , u , v;
		cin>>t>>u>>v;
		if(t) {
			grp[u - 1].pb(v - 1);
		} 
		eds.pb(mp(u - 1,v - 1));
	}

	for(int i = 0 ; i < n ; i++) {
		if(vis[i] == 0) 
			dfs(i);
	}

	reverse(all(order));
	vector<int> pos(n);

	for(int i = 0; i < n ; i++) {
		pos[order[i]] = i;
	}
	bool fl = true;
	for(int i = 0; i < n ; i++) {
		for(auto j : grp[i]) {
			if(pos[i] > pos[j]) {
				fl = false;
			}
		}
	}

	if(!fl) {
		cout<<"NO\n";
	} else {
		cout<<"YES\n";
		for(auto i : eds) {
			if(pos[i.first] < pos[i.second]) {
				cout<<i.first + 1<<" "<<i.second + 1<<"\n";
			} else {
				cout<<i.second + 1<<" "<<i.first + 1<<"\n";
			}
		}
	}

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