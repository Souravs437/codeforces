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
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



void solve() {
	ll n;
	cin>>n;
	string s;
	cin>>s;
	vector<ll> op(n , 0) , cl(n , 0);

	for(int i = 0; i < n ; i++) {
		if(s[i] == '(') {
			op[i]++;
		} else {
			cl[i]++;
		}
	}

	for(int i = 1 ; i < n ; i++) {
		op[i] += op[i-1];
		cl[i] += cl[i-1];
	}

	// for(int i = 0; i < n ; i++) {
	// 	cout<<op[i]<<" ";
	// }
	// cout<<"\n";

	// for(int i = 0; i < n ; i++) {
	// 	cout<<cl[i]<<" ";
	// }
	// cout<<"\n";

	ll ans = 0;
	for(int i = 0; i < n ; i++) {
		if(cl[i] > op[i]) {
			ans = max(ans , cl[i] - op[i]);
		}
	}

	cout<<ans<<"\n";	
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