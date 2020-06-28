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

ll n , k;
string s[11];
string ans;;

bool dp[11][2000];
bool go(ll len , ll mask) {
	if(len == k) {
		return dp[len][mask] = true;
	}

	ll cnt = 0;
	bool chk = false;
	char ch;
	for(int i = 0 ; i < n ; i++) {
		ch = s[i][len];
		ll nm = mask;
		bool fl = true;
		for(int j = 0; j < n ; j++) {
			if(ch != s[j][len]) {
				if(nm & (1 << j)) {
					fl = false;
					break;
				} else {
					nm |= (1<<j);
				}
			}
		}
		if(fl) {
			chk = go(len + 1, nm);
			//cout<<chk<<" "<<len<<" "<<nm<<"\n";
			if(chk) {
				return dp[len][mask] = chk;
			}
		}
	}
	return dp[len][mask] = chk;
}

void goo(ll len , ll mask) {
	if(len == k) {
		return ;
	}
	bool chk = false;
	char ch;
	for(int i = 0 ; i < n ; i++) {
		ch = s[i][len];
		ll nm = mask;
		bool fl = true;
		for(int j = 0 ; j < n ; j++) {
			if(ch != s[j][len]) {
				if(nm & (1 << j)) {
					fl = false;
					break;
				} else {
					nm |= (1<<j);
				}
			}
		}
		if(fl) {
			if(dp[len + 1][nm]) {
				ans += ch;
				goo(len + 1, nm);
				return ;
			}
			
			
		}
	}
	return;
}

void solve() {
	cin>>n>>k;
	mem(dp, 0);
	for(int i = 0; i < n ; i++) {
		cin>>s[i];
	}
	ans = "";
	bool fl = go(0,0);

	if(fl) {
		goo(0,0);
		cout<<ans<<"\n";
	} else {
		cout<<-1<<"\n";
	}
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