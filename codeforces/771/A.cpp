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

struct dsu{
	vector<int> par,rk;
	dsu(){}
	dsu(int n){reset(n);}
	void reset(int n){
		rk.assign(n,0);
		par.resize(n);
		for(int i = 0; i < n; i++) par[i] = i;
	}
	int getpar(int i){
		return (par[i]==i)? i:(par[i]=getpar(par[i]));
	}
	bool con(int i,int j){
		return getpar(i)==getpar(j);
	}
	bool join(int i,int j){
		i=getpar(i),j=getpar(j);
		if(i==j) return 0;
		if(rk[i]>rk[j]) par[j]=i;
		else{
		par[i]=j;
		if(rk[i]==rk[j]) rk[j]++;
		}
	return 1;
	}
} d;

vector<ll> deg;

void solve() {
	ll n , m;
	cin>>n>>m;
	d.reset(n+1);
	deg.resize(n+1);
	for(int i = 0; i < m ; i++) {
		ll u , v;
		cin>>u>>v;
		deg[u]++, deg[v]++;
		d.join(u,v);
	}

	map<ll , vector<ll>> mp;
	for(int i = 1 ; i <= n ; i++) {
		ll par = d.getpar(i);
		mp[par].pb(i);
	}

	for(auto i : mp) {
		for(auto j : i.second) {
			if(deg[j] != i.second.size() - 1) {
				cout<<"NO\n";
				return;
			}
		}
	}


	cout<<"YES\n";
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