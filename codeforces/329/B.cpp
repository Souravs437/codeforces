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

ll m , n;
string s[1001];
ll vis[1001][1001];
ll dis[1001][1001];
ll dx[9] = {0, 0, 1, -1, 1, 1, -1, -1, 0};
ll dy[9] = {1 ,-1, 0, 0, 1 ,-1, 1, -1, 0};

void solve() {
	cin>>n>>m;
	for(int i = 0; i < n ; i++) {
		cin>>s[i];
	}

	pair<int,int> ex , sc;

	for(int i = 0; i < n ; i++) {
		for(int j = 0; j < m ; j++) {
			if(s[i][j] == 'E') {
				ex.first = i , ex.second = j;
			}
			if(s[i][j] == 'S') {
				sc.first = i , sc.second = j;
			}
		}
	}

	queue<pair<int,int>> q;
	q.push(ex);
	vis[ex.first][ex.second] = 1;
	while(!q.empty()) {
		pair<int,int> node = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			int x = node.first + dx[i] , y = node.second + dy[i];
			if(x >= 0 && x < n && y >= 0 && y < m) {
				if(s[x][y] != 'T' && vis[x][y] == 0) {
					dis[x][y] = dis[node.first][node.second] + 1;
					vis[x][y] = 1;
					q.push(mp(x,y));
				}
			}
		}
	}

	ll val = dis[sc.first][sc.second];
	ll ans = 0;
	for(int i = 0; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(s[i][j] > '0' && s[i][j] <= '9') {
				if(val >= dis[i][j] && vis[i][j]) {
					ans += s[i][j] - '0';
				}
			}
		}
	}

	cout<<ans;
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