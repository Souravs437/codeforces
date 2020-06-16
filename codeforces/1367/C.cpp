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
	string s;
	cin>>s;
	ll ans = 0 , t = -1;
	for(int i = 0; i < n ;) {
		if(s[i] == '0') {
			if(i - t - 1 >= k || t == -1) {
				int kk = i;
				int cnt = 0;
				while( i < n && s[i] == '0') {
					i++;
					cnt++;
					if(cnt > k) {
						break;
					}
				}
				ll r = i - t;	
				if(cnt > k || i == n) {
					ans++;
					t = kk;
				}
			}  else {
				i++;
			}
		} else {
			t = i++;
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