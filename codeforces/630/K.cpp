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

ll val , n;
ll var[4] = {2,3,5,7};

void sol(int idx , ll num , int t) {
	if(idx == 4) {
		if(t%2) {
			val += n/num;
		} else {
			val -= n / num;
		}
		return;
	}

	if(num == inf) {
		sol(idx + 1 , var[idx] , t+1);
		sol(idx + 1, num , t);
	} else {
		sol(idx + 1, var[idx]*num, t+1);
		sol(idx+1,num , t);
	}
	
}

void solve() {
	cin>>n;
	sol(0,inf,0);
	cout<<n-val<<"\n";
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