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
ll go(ll l , ll r ,char ch) {
	if(l == r) {
		return s[l] != ch;
	}

	ll cntl = 0, cntr = 0;
	int mid = (l + r) >> 1;
	for(int i = l ; i <= mid ; i++) {
		if(s[i] != ch) {
			cntl++;
		}
	}
	for(int i = mid + 1; i <= r ; i++) {
		if(s[i] != ch) {
			cntr++;
		}
	}

	ll xx = cntl + go(mid + 1 , r , (int)ch+1);
	ll yy = cntr + go(l , mid , (int)ch + 1);
	return min(xx, yy);
}

void solve() {
	cin>>n;
	cin>>s;
	//mem(dp , - 1);
	cout<<go(0 , n - 1 , 'a')<<"\n";

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