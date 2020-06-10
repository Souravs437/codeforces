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

ll n , sum;
vector<ll> arr;
ll diff = inf , p1;

ll dp[55][2];

ll go(ll idx , ll ch) {
	if(idx == n) {
		return 0;
	}
	if(dp[idx][ch] + 1) {
		return dp[idx][ch];
	}
	ll xx;
	if(ch) {
		xx = max(arr[idx] + go(idx + 1, !ch) , go(idx + 1, ch));
	} else {
		xx = min(arr[idx] + go(idx + 1, ch) , go(idx + 1 , !ch));
	}
	return dp[idx][ch] = xx;
}

void solve() {
	cin>>n;
	arr.resize(n);
	mem(dp , -1);
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
		sum += arr[i];
	}

	ll bob = go(0 , 0);
	cout<<bob<<" "<<sum - bob<<"\n";
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