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

void solve() {
	ll n , k;
	cin>>n>>k;
	vector<pair<pair<ll,ll>,ll>> arr(n);
	for(int i = 0; i < n ; i++) {
		cin>>arr[i].first.first>>arr[i].first.second>>arr[i].second;
	}

	vector<ll> both , al , bob;
	for(int i = 0; i < n ; i++) {
		if(arr[i].first.second && arr[i].second) {
			both.pb(arr[i].first.first);
		} else {
			if(arr[i].first.second) {
				al.pb(arr[i].first.first);
			} 
			if(arr[i].second) {
				bob.pb(arr[i].first.first);
			}
		}
	}

	sort(all(bob)) , sort(all(both)) , sort(all(al));

	for(int i = 0; i < both.size() ; i++) {
		bob.pb(INT_MAX);
		al.pb(INT_MAX);
	}
	for(int i = 1 ; i < bob.size() ; i++) {
		bob[i] += bob[i-1];
	}
	for(int i = 1 ; i < al.size() ; i++) {
		al[i] += al[i-1];
	}

	for(int i = 1 ; i < both.size() ; i++) {
		both[i] += both[i-1];
	}



	ll ans = INT_MAX;
	if(bob.size() >= k && al.size() >= k) {
		ans = bob[k-1] + al[k-1];
	}
	if(both.size() >= k) {
		ans = min(ans , both[k-1]);
	}
	for(int i = 0; i < min(k  , (ll)both.size()); i++) {
		//cout<<i<<" "<<bob.size()<<" "<<al.size()<<"\n";
		ans = min(ans , both[i] + al[k-i-2] + bob[k-i-2]);
	}

	//cout<<ans<<"\n";
	if(ans >= INT_MAX) {
		cout<<-1;
	} else{
		cout<<ans;
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