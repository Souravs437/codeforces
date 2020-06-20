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

ll n , k , d;

ll dp[110][2];

ll go(ll sum , ll xx) {
	//cout<<sum<<" "<<xx<<"\n";
	if(sum == n) {
		return xx;
	} 

	if(sum > n) {
		return 0;
	}
	if(dp[sum][xx] + 1) {
		return dp[sum][xx];
	}
	ll ans = 0;
	for(int i = 1;  i <= k ; i++) {
		if(d <= i) {
			ans += go(sum + i , 1);
		} else {
			ans += go(sum + i , xx);
		}
		ans = ans % mod;
	}
	return dp[sum][xx] =  ans % mod;
}

void solve() {
	mem(dp , -1);
	cin>>n>>k>>d;
	cout<<go(0,0);
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