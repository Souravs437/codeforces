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

ll n , m;
ll arr[501][501];
ll dp[510][1024];

bool go(ll idx, ll xxor) {
	if(idx == n) {
		return dp[idx][xxor] = xxor != 0;
	}

	ll xx = 0;
	if(dp[idx][xxor] + 1) {
		return dp[idx][xxor];
	}
	for(int i = 0; i < m; i++) {
		if(xx) {
			return dp[idx][xxor] = xx;
		}
		xx = go(idx +1 , xxor^arr[idx][i]);
	}
	return dp[idx][xxor] = xx;
}

void goo(ll idx , ll xxor) {
	if(idx == n) {
		return ;
	}

	ll xx = 0;

	for(int i = 0 ; i < m ; i++) {
		if(dp[idx+1][xxor ^ arr[idx][i]]) {
			cout<<i+1<<" ";
			goo(idx+1, xxor ^ arr[idx][i]);
			return;
		}
	}
}

void solve() {
	cin>>n>>m;
	mem(dp , -1);
	for(int i = 0; i < n ;i++) {
		for(int j = 0; j < m ; j++) 
			cin>>arr[i][j];
	}



	bool yoy = go(0,0);

	// for(int i = 0 ; i < 3;  i++) {
	// 	for(int j = 0; j < 15 ; j++) {
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	if(yoy) {
		cout<<"TAK\n";
		goo(0,0);
	} else {
		cout<<"NIE\n";
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