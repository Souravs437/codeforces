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
 
ll n , m;
ll arr[53][53];
ll dx[4] = {0, 0 , 1 , -1};
ll dy[4] = {1,-1, 0 , 0}; 
bool chk(int r , int c) {

	for(int i = 1 ; i <= n ; i++) {
		if(arr[i][c]) {
			return false;
		}
	}

	for(int i = 1; i <= m ; i++) {
		if(arr[r][i]) {
			return false;
		}
	}
 
	return true;
}
 
void solve() {
 
	cin>>n>>m;
	for(int i = 1; i <= n ; i++) {
		for(int j = 1; j <= m ; j++) {
			cin>>arr[i][j];
		}
	}
 
 
	ll ans = 0;
	while(1) {
		bool flag = false;
		for(int i = 1; i <= n ; i++) {
			for(int j = 1; j <= m ; j++) {
				if(arr[i][j] == 0 && chk(i,j)) {
					flag = true;
					arr[i][j] = 1;
					break;
				}
			}
			if(flag) {
				ans++;
				break;
			}
		}
		if(!flag) {
			break;
		}
	}
	if(ans%2) {
		cout<<"Ashish\n";
	} else {
		cout<<"Vivek\n";
	}
	mem(arr , 0);
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