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

ll res = 0;

void solve() {
	string s;
	cin>>s;
	vector<ll> pref(s.size() , 0);
	if(s[0] == '-') {
		pref[0] = -1;
	} else {
		pref[0] = 1;
	}

	ll cnt  = pref[0];
	for(int i = 1 ; i < s.size() ; i++) {
		if(s[i] == '-') {
			pref[i] = pref[i-1] - 1;
		} else {
			pref[i] = pref[i-1] + 1;
		}

		cnt = min(cnt , pref[i]);
	}

	ll ans = 0 , cc = 0;

	for(int i = 0; i < s.size() ; i++) {
		if(s[i] == '-' && pref[i] + cc< 0) {
			ans += i + 1;
			cc++;
		}
	}

	cout<<ans + s.size()<<"\n";
}
int main()
{
	DANGER;
	ll t = 1;
	cin>>t;
	while(t--) {
		solve();
	}
return 0;
}
//---->O ,,