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
	vector<ll> arr(n);
	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
	}

	vector<ll> sol(N*40 , -1);

	ll xx = pow(2, 22) - 1;

	for(int i = 0; i < n ;i++) {
		sol[arr[i]^xx] = arr[i];
	}

	for(int i = N*40 - 1; i >= 0 ; i--) {
		if(sol[i] != -1) {
			ll mm = i;
			for(int j = 0 ; j < 22 ; j++) {
				if(mm & (1 << j)) {
					sol[mm & (~(1<<j))] = max(sol[mm & (~(1<<j))], sol[i]);
				}
			}
		}
	}

	for(int i = 0; i < n ; i++) {
		cout<<sol[arr[i]]<<" ";
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