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
 
string a , b ;
ll m , d , len;
int arr[2005];
 
ll dp[2005][2][2][2][2005];
 
ll go(ll idx , ll fl , ll offset , ll eve , ll rem) {
	if(idx == len) {
		return rem == 0;
	}
 
	if(dp[idx][fl][offset][eve][rem] + 1) {
		return dp[idx][fl][offset][eve][rem];
	}
	ll ans = 0;
 
	if(eve) {
		if(fl) {
			ans += go(idx + 1 , 1 , 0 , 0 , (rem * 10 + d) % m);
			
		} else if(d < arr[idx]) {
			ans += go(idx + 1, 1 , 0 , 0 , (rem * 10 + d) % m);
			
		} else if(d == arr[idx]) {
			ans += go(idx + 1, 0 , 0 , 0 , (rem * 10 + d) % m);
			
		}
		ans = ans % mod;
		return dp[idx][fl][offset][eve][rem] =  ans;
	}
 
	for(int i = 0 + offset ; i < 10 ; i++) {
		if(i == d) {
			continue;
		} else {
			if(fl) {
				ans += go(idx + 1, 1 , 0 , 1 , (rem * 10 + i) %m);
				
			} else if(i < arr[idx]) {
				ans += go(idx + 1, 1 , 0 , 1 , (rem * 10 + i) % m);
				
			} else if(i == arr[idx]) {
				ans += go(idx + 1, 0 , 0 , 1 , (rem * 10 + i) % m);
				
			} else {
				break;
			}
			ans = ans % mod;
		}
	}
 
	return dp[idx][fl][offset][eve][rem] = ans % mod;
}
 
ll get(string &s) {
	mem(dp , -1);
	for(int i = 0 ; i < s.size() ; i++) {
		arr[i] = (s[i] - '0');
	}

	len = s.size();
	ll ans =0;
 
	for(int i = 0 ; i < len ; i++) {
		ans += go(i , i > 0 , 1 , 0 , 0);
		ans = ans % mod;
	}
	return ans % mod;
}
 
bool chk(string &s) {
	ll rem = 0;
	for(int i = 0 ; i < s.size() ; i++) {
		if(i&1) {
			if(s[i] - '0' != d) return false;
		} else {
			if(s[i] - '0' == d) return false;
		}
		rem = (rem * 10 + s[i] - '0') % m;
	}
	if(rem == 0 ){
		return true;
	} else {
		return false;
	}
}
 
void solve() {
	cin>>m>>d>>a>>b;
	
	cout<<(get(b) - get(a) + mod + chk(a)) % mod;
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