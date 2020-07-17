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
string s;
vector<ll> idx[26];
map<pair<ll,pair<ll, char>> ,ll> dp;
ll go(ll l , ll r ,char ch) {
	if(l == r) {
		return s[l-1] != ch;
	}

	if(dp.count({l,{r,ch}})) {
		return dp[{l,{r,ch}}];
	}

	ll mid = (l + r) >> 1;
	ll cntl = 0, cntr = 0;
	ll it1 = lower_bound(idx[ch - 'a'].begin() , idx[ch - 'a'].end() , l) - idx[ch - 'a'].begin();
	ll it2 = upper_bound(idx[ch - 'a'].begin() , idx[ch - 'a'].end() , (l + r )/ 2) -  idx[ch - 'a'].begin();

	ll xx = (l + r) / 2 - l + 1 - it2 + it1;
	it1 = lower_bound(idx[ch - 'a'].begin() , idx[ch - 'a'].end() , (l + r) / 2 + 1) - idx[ch - 'a'].begin();
	it2 = upper_bound(idx[ch - 'a'].begin() , idx[ch - 'a'].end() , r) -  idx[ch - 'a'].begin();

	ll yy  = r - (l + r) / 2 - it2 + it1 ;
	//cout<<xx<<" "<<yy<<"\n";
	xx += go((l+r) / 2 + 1, r , (int)ch + 1);
	yy += go(l , (l+r) / 2 , (int)ch + 1);
	return dp[{l,{r,ch}}] =  min(xx , yy);
}

void solve() {
	cin>>n;
	cin>>s;
	for(int i = 0; i < s.size() ; i++) {
		idx[s[i] - 'a'].pb(i+1);
	}
	//mem(dp , - 1);
	cout<<go(1 , n , 'a')<<"\n";

	for(int i = 0; i < 26 ; i++) {
		idx[i].clear();
	}
	dp.clear();
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