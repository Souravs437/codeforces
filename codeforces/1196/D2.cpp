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

string st = "RGB";

void solve() {
	ll val , n;
	string s;
	cin>>n>>val>>s;
	ll ans = inf;

	for(int k = 0 ; k < 3; k++) {
		ll curr = 0;
		vector<ll> arr(s.size());
		for(int i = 0; i < s.size();  i++) {
			arr[i]= (s[i] != st[(k+i) % 3]);
			curr += arr[i];
			//cout<<st[(k+i) %3]<<"\n";
			if(i >= val) {
				curr -= arr[i - val];
				//ans = min(ans, curr);
			}
			if(i >= val - 1) {
				ans = min(ans , curr);
			}
			//cout<<curr<<"\n";	
		}
		//ans = min(ans , curr);
		//cout<<"\n\n";
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