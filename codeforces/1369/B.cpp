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
	string s;
	ll n;
	cin>>n>>s;
	string ans = "";
	ll fz = -1, lz = - 1, fo = -1, lo = -1;
	for(int i = 0; i < n - 1 ; i++) { 
		if(s[i] == '1') {
			if(fo == -1) {
				fo = i;
			} else {
				lo = i;
			}
		} else {
			if(fz == -1) {
				fz = i;
			} else {
				lz = i;
			}
		}
	}
	string on = "" , zr = "";
	// for(int i = n - 1; i >= 0; i--) {
	// 	if(s[i] == '0') {
	// 		break;
	// 	} else {
	// 		on += s[i];
	// 	}
	// }

	// for(int i = 0; i < n ; i++) {
	// 	if(s[i] == '1') {
	// 		break;
	// 	} else {
	// 		zr += s[i];
	// 	}
	// 
	ll zero = 0 , one = 0;

	for(int i = n - 1; i >= 0; i--) {
		if(s[i] == '1') {
			if(!zero) {
				one++;
			} else {
				//one = 0;
				zero = 1;
			}
		} else {
			zero++;
		}
	}

	for(int i = 0 ; i < zero ; i++) {
		ans += '0';
	}
	for(int i = 0; i < one ; i++) {
		ans += '1';
	}
	cout<<ans;

	cout<<zr + on<<"\n";
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