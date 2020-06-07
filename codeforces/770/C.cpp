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

ll n , k;
vector<ll> ed[N] , order;
ll cyc;
ll vis[N];
map<ll,ll> mp;
void dfs(int node) {
	mp[node] = 1;
	if(vis[node]) {
		if(vis[node] == 1) {
			cyc = 1;
		}
		return;
	} 

	vis[node] = 1;

	for(auto i : ed[node]) {
		dfs(i);
	}
	order.pb(node);
	vis[node] = 2;
}

void solve() {
	cin>>n>>k;
	vector<ll> arr(k);
	for(int i = 0 ; i < k ; i++) {
		cin>>arr[i];
	}
	for(int i = 0;  i < n ; i++) {
		ll x;
		cin>>x;
		for(int j = 0 ; j < x ; j++) {
			ll xx ; cin>>xx;
			ed[i+1].pb(xx);
		}
	}

	vector<ll> ans;
	map<ll,ll> ck;
	for(int i = 0 ; i < k ; i++) {
		if(mp.count(arr[i])) {
			continue;
		}
		if(ed[arr[i]].size() == 0) {
			mp[arr[i]] = 1;
			ck[arr[i]] = 1;
			ans.pb(arr[i]);
		} else {
			cyc = 0;
			order.clear();
			dfs(arr[i]);
			if(cyc) {
				cout<<-1<<"\n";
				return;
			} else {
				for(auto k : order) {
					if(ck.count(k)) {
						continue;
					}
					ck[k] = 1;
					ans.pb(k);
				}
			}
		}
	}

	cout<<ans.size()<<"\n";
	for(auto i : ans) {
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