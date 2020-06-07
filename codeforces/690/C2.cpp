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
void solve() {
	cin>>n>>m;
	for(int i = 0; i < m ; i++) {
		ll u , v;
		cin>>u>>v;
		ed[u].pb(v);
		ed[v].pb(u);
	}

	queue<ll> q;
	q.push(1);
	ll dis[n+1] , vis[n+1];
	mem(dis , 0);
	mem(vis , 0);
	vis[1] = 1;
	while(!q.empty()) {
		ll node = q.front();
		q.pop();

		for(auto i : ed[node]) {
			if(!vis[i]) {
				dis[i] = dis[node] + 1;
				q.push(i);
				vis[i] = 1;
			}
		}
	}

	ll temp , dist = 0;
	for(int i = 1; i <= n ; i++) {
		if(dist < dis[i]) {
			dist = dis[i];
			temp = i;
		}
	}

	mem(vis, 0) , mem(dis , 0);
	q.push(temp);

	vis[temp] = 1;
	//cout<<"\n";
	while(!q.empty()) {
		ll node = q.front();
		q.pop();
		for(auto i : ed[node]) {
			//cout<<i<<" ";
			if(!vis[i]) {
				dis[i] = dis[node] + 1;
				vis[i] = 1;
				q.push(i);
			}
		}
	}

	ll ans = 0;

	for(int i = 1; i <= n ; i++) {
		ans = max(ans , dis[i]);
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