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
	string s;
	cin>>s;
	ll a , b ,c , x, y , z, amt;
	cin>>a>>b>>c>>x>>y>>z>>amt;

	ll reb  = 0, res  = 0, rec = 0;

	for(int i = 0; i < s.size() ; i++) {
		if(s[i] == 'B') {
			reb++;
		} else if(s[i] == 'S') {
			res++;
		} else {
			rec++;
		}
	}

	if(res == 0) {
		b = 0;
	}
	if(reb == 0) {
		a = 0;
	}
	if(rec == 0) {
		c = 0;
	}

	ll cst = reb*x + res*y + rec*z;
	ll ans = 0;
	while(1) {
		if(a == 0 && b == 0 && c == 0) {
			break;
		}

		if(a >= reb) {
			a -= reb;
		} else {
			if(amt >= (reb - a) * x) {
				amt -= (reb - a) *x;
				a = 0;
			} else {
				break;
			}
		}

		if(b >= res) {
			b -= res;
		} else {
			if(amt >= (res - b) * y) {
				amt -= (res - b) * y;
				b = 0;
			} else {
				break;
			}
		} 

		if(c >= rec) {
			c -= rec;
		} else {
			if(amt >= (rec - c) * z) {
				amt -= (rec - c) * z;
				c = 0;
			} else {
				break;
			}
		}
		ans++;
	}

	ans += amt /cst;
	cout<<ans;
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