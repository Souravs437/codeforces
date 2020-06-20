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


ll cntfo(ll n) {
	ll ans = 0;
	for(int i = 2 ; i <= sqrt(n) ; i++) {
		if(n % i == 0) {
			if(i%2) {
				ans = max(ans , (ll)i);
				//cnt++;
			}

			ll xx = n / i;
			if(xx % 2) {
				ans = max(ans , xx);
				//cnt++;
			}
		}
	}
	return ans;
}

ll pnf(ll n) {

	ll cnt = 0;
	while(n%2 == 0) {
		n /= 2;
	}

	for(int i = 3; i <= sqrt(n) ; i += 2) {
		while(n%i == 0) {
			cnt++;
			n /= i;
		}
	}

	if(n >= 2) {
		cnt++;
	}
	return cnt;
}

void solve() {
	ll n;
	cin>>n;
	ll cc = cntfo(n);
	ll num = pnf(n);

	if(n == 1) {
		cout<<"FastestFinger\n";
		return;
	}
	if(n % 2 || n == 2) {
		cout<<"Ashishgup\n";
		return;
	}
	if(num == 0) {
		cout<<"FastestFinger\n";
		return;
	}
	if(n/cc == 2) {
		if(num  > 1) {
			cout<<"Ashishgup\n";
		} else {
			cout<<"FastestFinger\n";
		}
	} else {
		cout<<"Ashishgup\n";
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