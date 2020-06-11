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

bool compare(pair<ll,ll> a , pair<ll,ll> b) {
	return a.first > b.first;
}

void solve() {
	ll n , k;
	cin>>n>>k;
	vector<ll> arr(n);
	vector<pair<ll ,ll>> emp;
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
		emp.pb(mp(arr[i] , i));
	}

	sort(all(emp) , compare);

	map<ll ,vector<ll>> mp1;

	for(int i = 0; i < k ; i++) {
		ll u , v;
		cin>>u>>v;
		mp1[u-1].pb(v-1);
		mp1[v-1].pb(u-1);
	}

	vector<ll> sol(n);

	for(int i = 0 ; i < n; i++) {


		ll val = emp[i].first;
		ll hi = n - 1, lo = i;
		while(lo < hi) {
			ll mid = (lo + hi) >> 1;
			if(emp[mid].first == val) {
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		}
		if(emp[lo].first < val) {
			lo--;
		}
		sol[emp[i].second] = n - lo - 1;
		for(auto j : mp1[emp[i].second]) {
			if(arr[j] < val) {
				sol[emp[i].second]--;
			}
		}
	}

	for(int i = 0 ; i < n ; i++) {
		cout<<sol[i]<<" ";
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