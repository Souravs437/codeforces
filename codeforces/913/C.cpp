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


bool cmp(pair<ll , ll> a , pair<ll,ll> b) {
	double f = a.second/(double)a.first  , s = b.second / (double)b.first;
	if(f != s) {
		if(f > s) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return a.second > b.second;
	}
}

void solve() {
	ll n , l;
	cin>>n>>l;
	vector<pair<ll,ll>> cst(n);
	for(int i = 0; i < n ; i++) {
		cin>>cst[i].first;
		cst[i].second = pow(2, i);
	}
	

	sort(all(cst) , cmp);
	ll cnt = 0;
	ll ans = ((l + cst[0].second - 1 / cst[0].second)* cst[0].first);
	for(int i = 0; i < n ; i++) {
		//cout<<l<<" ";
	
		if(cst[i].second <= l) {
			ll temp = l / cst[i].second;
			cnt += temp*cst[i].first;
			l -= temp*cst[i].second;
			ans = min(ans , cnt + cst[i].first);
		} else {
			ans = min(ans ,cnt + cst[i].first);
		}
		if(l <= 0) {
			ans = min(ans , cnt);
		}
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