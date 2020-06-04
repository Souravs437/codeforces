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
 
void solve() {
	ll a ,b;
	cin>>a>>b;
	ll ans = 0;
	if(a == b) {
		cout<<ans<<"\n";
		return;
	}

	if(a > b) {
		while(a % 2 == 0 && a != b) {
			a /= 2;
			ans++;
		}
		if(a == b) {
			ll val = (ans % 3);
			ll r = ans / 3;
			ll c = val / 2;
			ll x = val % 2;
			cout<<r + c + x<<"\n";
		} else {
			cout<<-1<<"\n";
		}
	} else {
		while(a < b) {
			a *= 2;
			ans++;
		}
		if(a == b) {
			//cout<<ans<<" ";
			ll val = (ans % 3);
			ll r = ans / 3;
			ll c = val / 2;
			ll x = val % 2;
			cout<<r + c + x<<"\n";
		} else {
			cout<<-1<<"\n";	
		}
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