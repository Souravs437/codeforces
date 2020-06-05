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
	vector<ll> fir(n + 1 , N) , sec(n + 1, -1);
	vector<ll> arr(k);
	for(int i = 0; i < k ; i++) {
		cin>>arr[i];
	}

	ll ans = 0;

	for(int i = 0 ; i < k ; i++) {
		sec[arr[i]] = i + 1;
	}

	for(int i = k - 1; i >= 0 ; i--) {
		fir[arr[i]] = i + 1;
	}

	for(int i = 1; i <= n; i++) {
		for(int j = max(1LL , i - 1LL) ; j <= min(n , i + 1LL) ; j++) {
			if(i == j) {
				if(sec[i] == -1) {
					ans++;
				}
			} else {
				if((fir[j] - sec[i]) >= 0) {
					ans++;
				}
			}
		}
	}

	cout<<ans<<"\n";
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