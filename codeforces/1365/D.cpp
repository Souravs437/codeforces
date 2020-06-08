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
string s[54];
ll dx[4] = {0,0,1,-1};
ll dy[4] = {1,-1,0,0};
ll mat[100][100];

void dfs(int r , int c) {
	if(mat[r][c]) {
		return;
	}
	mat[r][c] = 1;
	for(int i = 0 ; i < 4; i++) {
		if(r + dx[i] >= 0 && r + dx[i] < n && c + dy[i] >= 0 && c + dy[i] < m) {
			if(s[r+dx[i]][c + dy[i]] != '#') {
				dfs(r + dx[i] , c + dy[i]);
			}
		}
	}
}

bool chk(int r , int c) {
	for(int i = 0 ; i < 4;  i++) {
		if(r + dx[i] >= 0 && r + dx[i] < n && c + dy[i] >= 0 && c + dy[i] < m) {
			int ii = r + dx[i] , jj = c + dy[i];
			if(s[ii][jj] == 'G') {
				return false;
			} else if(s[ii][jj] == '.'){
				s[ii][jj] = '#';
			}
		} 
	}

	return true;
}

void solve() {
	cin>>n>>m;
	for(int i = 0; i < n ; i++) {
		cin>>s[i];
	}
	mem(mat , 0);
	int cntg = 0 , val = 0; 	
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(s[i][j] == 'G') {
				cntg++;
			}
			if(s[i][j] == 'B' && !chk(i,j)) {
				cout<<"No\n";
				return;
			}
		}
	}
	if(s[n-1][m-1] == '#') {
		if(cntg == 0) {
			cout<<"Yes\n";
		} else {
			cout<<"No\n";
		}
		return;
	}
	dfs(n-1,m-1);
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m; j++) {
			if(s[i][j] == 'G') {
				if(mat[i][j]) {
					val++;
				}
			}
		}
	}


	if(val == cntg) {
		cout<<"Yes\n";
	} else {
		cout<<"No\n";
	}

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