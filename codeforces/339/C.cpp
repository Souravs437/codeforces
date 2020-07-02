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
ll m;
string s;
vector<ll> arr;

void dfs(ll diff , ll k , ll idx) {
	if(idx == m) {
		cout<<"YES\n";
		for(auto i : arr) {
			cout<<i<<" ";
		}
		exit(0);
	}

	for(int i = 0 ; i < 10 ; i++) {
		if(s[i] - '0' && i + 1 != k) {
			if(abs(diff) < i + 1) {
				arr.pb(i+1);
				dfs(max(diff , i + 1LL) - min(diff , i+1LL) , i + 1 , idx + 1);
				arr.pop_back();
			}
		}
	}
}

void solve() {

	cin>>s>>m;
	dfs(0,0,0);
	cout<<"NO\n";
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