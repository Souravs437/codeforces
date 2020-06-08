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

vector<ll> arr;
ll dp[20][2][2][10][10];

ll go(ll idx , ll fl , ll offset , ll first , ll last) {
	if(idx == arr.size()) {
		return first == last;
	}

	ll ans = 0;
	if(dp[idx][fl][offset][first][last] + 1) {
		return dp[idx][fl][offset][first][last];
	}
	for(int i = 0 + offset ; i < 10 ; i++) {
		if(fl) {
			if(offset)
				ans += go(idx + 1, 1 , 0, i , i);
			else {
				ans += go(idx + 1, 1 , 0 , first , i);
			}
		} else if(i < arr[idx]) {
			if(offset)
				ans += go(idx + 1, 1 , 0, i , i);
			else {
				ans += go(idx + 1, 1 , 0 , first , i);
			}
		} else if(i == arr[idx]) {
			if(offset)
				ans += go(idx + 1, 0 , 0, i , i);
			else {
				ans += go(idx + 1, 0 , 0 , first , i);
			}
		} else {
			break;
		}
	}
	return dp[idx][fl][offset][first][last] = ans;
}

ll get(ll a) {
	arr.clear();
	while(a) {
		arr.pb(a%10);
		a /= 10;
	}
	reverse(all(arr));
	mem(dp , -1);
	ll ans = 0;
	for(int i = 0 ; i < arr.size() ; i++) {
		ans += go(i , i > 0 , 1 , 0,0);
	}
	return ans;
}

void solve() {
	ll l , r;
	cin>>l>>r;
	cout<<get(r) - get(l-1)<<"\n";
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