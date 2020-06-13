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
	ll n , m;
	cin>>n>>m;
	ll mxt = m , mnt = m;
	ll p_time = 0;
	bool fl = 1;
	for(int i = 0; i < n ; i++) {
		ll t ,l , r;
		cin>>t>>l>>r;
		mxt = mxt + t - p_time, mnt = mnt - t + p_time;
		//cout<<mxt<<" "<<mnt<<"\n";
		p_time = t;
		if(mnt <= r && mxt >= l) {
			mnt = max(l , mnt);
			mxt = min(r , mxt);
		} else {
			fl = 0;
		}
	}
	if(fl)
		cout<<"YES\n";
	else {
		cout<<"NO\n";
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