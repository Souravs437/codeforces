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
	ll n , k;
	cin>>n>>k;
	vector<ll> arr(n);
	ll mxl = 0;
	ll need = N;
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
		need = min(need , arr[i]);
		mxl = max(mxl , arr[i]);
	}	

	sort(all(arr) , greater<ll>());
	ll curr_s = 0, ans = 0;
	ll idx = 0;
	for(ll i = mxl ; i > need ; i--) {
		ll cc = i;
		ll ss = idx;
		while(arr[idx] == cc) {
			ss++;
			idx++;
		}

		curr_s += ss;
		//cout<<curr_s<<"\n";
		if(k < curr_s) {
			//cout<<"fd";
			ans++;
			curr_s = ss;
		}
	}
	if(curr_s > 0) 
		ans++;
	cout<<ans;


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