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
	ll n;
	cin>>n;
	vector<ll> arr(2*n);
	map<ll,vector<ll>> mp;
	for(int i = 0; i < 2 * n ; i++) {
		cin>>arr[i];
		mp[arr[i]%2].pb(i+1);
	}

	for(int i = 0; i < n - 1 ; i++) {
		if(mp[0].size() > 1) {
			cout<<mp[0].back()<<" ";
			mp[0].pop_back();
			cout<<mp[0].back()<<"\n";
			mp[0].pop_back();
		} else {
			cout<<mp[1].back();
			mp[1].pop_back();
			cout<<" "<<mp[1].back()<<"\n";
			mp[1].pop_back();
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