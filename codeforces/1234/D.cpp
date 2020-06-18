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

ll bit[26][N] , len;

void upt(ll idx , ll ch , ll val) {
	while(idx < len + 1) {
		bit[ch][idx] += val;
		idx += (idx)&(-idx);
	}
}

ll sum(ll idx , ll ch) {
	ll sum = 0;
	while(idx > 0) {
		sum += bit[ch][idx];
		idx -= (idx) & (-idx);
	}
	return sum;
}

void solve() {
	string s;
	cin>>s;
	len = s.size();
	ll q;
	cin>>q;
	for(int i = 0; i < len ; i++) {
		upt(i+1, s[i] - 'a' , 1);
	}
	for(int i = 0 ; i < q; i++) {
		ll t,l,r , pos;
		char ch;
		cin>>t;
		if(t == 1 ) {
			cin>>pos>>ch;
			upt(pos , s[pos-1] - 'a' , -1);
			s[pos-1] = ch;
			upt(pos , ch - 'a' , 1);
		} else {
			ll ans = 0;
			cin>>l>>r;
			for(int i = 0 ; i < 26 ; i++) {
				ll cc = sum(r , i) - sum(l-1 , i);
				if(cc) {
					ans++;
				}
			}

			cout<<ans<<"\n";
		}
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