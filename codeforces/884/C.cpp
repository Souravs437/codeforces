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
ll vis[N];

ll dfs(ll node) {
	if(vis[node]) {
		return 0;
	}
	vis[node] = 1;
	ll cnt = 1;

	for(auto i : ed[node]) {
		cnt += dfs(i);
	}

	return cnt;
}

void solve() {
	ll n;
	cin>>n;
	for(int i = 1; i <= n ;i++) {
		ll x; cin>>x;
		ed[i].pb(x);
	}

	priority_queue<ll> sz;
	ll ans = 0;
	ll cnt = 0;
	for(int i = 1 ; i <= n ;i++) {
		if(vis[i] == 0) {
			ll val = dfs(i);
			cnt++;
			sz.push(val);
			ans += val * val;
		}
	}

	if(cnt > 1) {
		ll s1 = sz.top();
		sz.pop();
		ll s2 = sz.top();
		ans -= s1*s1;
		ans -= s2*s2;
		s1 += s2;

		ans += s1*s1;
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