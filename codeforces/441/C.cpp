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

vector<ll> sol[N];
ll ok = 2;
void solve() {
	ll n , m  , k;
	cin>>n>>m>>k;
	ll ans = k;
	if(ans == 1) {
		ok = inf;
	}
	for(int i = 1 ; i <= n ; i++) {
		if(i&1) {
			for(int j = 1; j <= m ; j++) {
				if(ok) {
					sol[ans].pb(i);
					sol[ans].pb(j);
					ok--;
					if(ok == 0) {
						ans--;
						if(ans == 1) {
							ok = inf;
						} else {
							ok = 2;
						}
					}
				} 
			}
		} else {
			for(int j = m ; j >= 1; j--) {
				if(ok) {
					sol[ans].pb(i);
					sol[ans].pb(j);
					ok--;
					if(ok == 0) {
						ans--;
						if(ans == 1) {
							ok = inf;
						} else {
							ok = 2;
						}
					}
				} 
			}
		}
	}

	for(int i = 1; i <= k ; i++) {
		cout<<sol[i].size()/2<<" ";
		for(auto i : sol[i]) {
			cout<<i<<" ";
		}
		cout<<"\n";
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