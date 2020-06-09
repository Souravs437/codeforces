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

string s[55];
ll vis[100][100];
ll n , m;
ll ok = 0;
char ch;
ll dx[4] = {0 , 0 , -1, 1};
ll dy[4] = {1 , -1, 0 , 0};
void dfs(int r , int c , int pr = -1 , int pj = -1) {
	if(vis[r][c]) {
		ok = 1;
		return;
	}

	vis[r][c] = 1;

	for(int i = 0 ; i < 4; i++) {
		int ii = r + dx[i] , jj = c + dy[i];
		if(ii >= 0 && ii < n && jj >= 0 && jj < m) {
			if(s[ii][jj] == ch) {
				if(ii == pr && jj == pj) continue;
				dfs(ii,jj , r , c);
			}
		}
	}
}


void solve() {
	cin>>n>>m;
	for(int i = 0 ; i < n ; i++) {
		cin>>s[i];
	}

	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(vis[i][j] == 0) {
				ch = s[i][j] , ok = 0;
				dfs(i,j);
				if(ok) {
					//cout<<ch<<" "<<i<<" "<<j<<"\n";
					cout<<"Yes\n";
					return;
				}
			}
		}
	}
	cout<<"No\n";
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