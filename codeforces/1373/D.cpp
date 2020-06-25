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

vector<ll> bb;

ll kad() {
	ll mx = 0 , curr_mx = 0;
	for(int i = 0; i < bb.size() ; i++) {
		curr_mx = max(curr_mx + bb[i] , 0LL);
		mx = max(mx , curr_mx);
	}
	return mx;
}

void solve() {
	ll n;
	cin>>n;
	vector<ll> arr(n);
	ll curr = 0;
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
		if(i%2 == 0) {
			curr += arr[i];
		}
	}

	for(int i = 0 ; i < n - 1; i+=2){
		bb.pb(arr[i+1] - arr[i]);
	}

	ll xx = kad();

	bb.clear();
	for(int i = 1; i < n - 1; i+=2){
		bb.pb(arr[i] - arr[i + 1]);
	}

	xx = max(xx , kad());
	//cout<<xx<<" ";
	cout<<max(curr + xx , curr)<<"\n";
	bb.clear();
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