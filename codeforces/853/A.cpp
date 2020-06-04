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
typedef pair<ll,ll> pll;
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
	vector<pll> arr(n);

	priority_queue<pll> qq;
	for(int i = 0; i < n ;i++) {
		cin>>arr[i].first;
		arr[i].second = i + 1;
	}	

	for(int i = 0; i < k ; i++) {
		qq.push(arr[i]);
	}

	ll ans = 0;
	vector<ll> plan(n);
	for(int i = k ; i < n + k; i++) {
		if(i < n) {
			qq.push(arr[i]);
		}

		pll curr = qq.top();
		qq.pop();
		ans += (i + 1 - curr.second) * curr.first;
		plan[curr.second - 1] = i + 1;
	}

	cout<<ans<<"\n";

	for(int i = 0; i < n ;i++) {
		cout<<plan[i]<<" ";
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