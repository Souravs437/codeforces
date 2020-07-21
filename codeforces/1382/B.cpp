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
ll n;
vector<ll> arr(n);
ll dp[N][2];
bool go(ll idx , ll tt) {
	if(idx  == n - 1) {
		//cout<<tt<<"\n";
		return tt == 0;
	}

	if(dp[idx][tt] + 1) {
		return dp[idx][tt];
	}
	if(tt == 0) {
		if(arr[idx] > 1) {
			return  dp[idx][tt] = max(go(idx + 1 , tt) , go(idx + 1, !tt));
		}  else {
			return dp[idx][tt] =  go(idx + 1 , !tt);
		}
	} else {
		if(arr[idx] > 1) {
			return dp[idx][tt] = min(go(idx + 1, tt) , go(idx + 1, !tt));
		} else {
			return dp[idx][tt] = go(idx + 1, !tt);
		}
	}

}

void solve() {
	arr.clear();
	mem(dp , -1);
	cin>>n;
	arr = vector<ll>(n);
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
	}
	ll tu = go(0,0);
	if(!tu) {
		cout<<"Second\n";
	} else {
		cout<<"First\n";
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