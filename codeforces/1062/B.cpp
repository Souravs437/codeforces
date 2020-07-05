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
ll sol , ok;
ll fact(ll n) {
	map<ll,ll> mp;
	ll pv = 0;
	while(n % 2 == 0) {
		n /= 2;
		mp[2]++;
	}
	if(mp.count(2)) {
		pv = mp[2];
	}
	for(int i = 3 ; i <= sqrt(n) ; i+= 2) {
		while(n%i == 0) {
			n /= i;
			mp[i]++;
		}
		if(!pv && mp.count(i)) {
			pv = mp[i];
		} 
	}

	if(n > 1) {
		mp[n]++;
	}

	ll mx = 0;
	sol = 1;
	for(auto i : mp) {
		sol *= i.first;
		if(i.second != pv) {
			ok = 1;
		}
		mx = max (mx , i.second);

	}
	return mx;
}

void solve() {
	ll n;
	cin>>n;
	ll x = fact(n);
	if(x == 1 || x == 0) {
		cout<<n<<" "<<0<<"\n";
	} else {
		ll num = 0 , cnt = 0;
		for(int i = 24 ; i >= 0 ; i--) {
			if(x & (1 << i)) {
				if(!num) {
					num |= (1 << (i));
				}
				cnt++;
			}
		}
		if(cnt > 1) {
			num = num << 1;
		}
		
		ll ans = 0;
		if(num != x || ok) {
			ans = 1;
		}
		while(num != 1) {
			ans++;
			num/=2;
		} 
		cout<<sol<<" ";
		cout<<ans<<"\n";
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