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

string s[8];
ll ok = 0;
ll mat[8][8][10];
ll dx[9] = {0, 0, 1, -1, 1, 1, -1, -1, 0};
ll dy[9] = {1 ,-1, 0, 0, 1 ,-1, 1, -1, 0};
void go(int t , int r , int c) {
	//cout<<t<<" "<<r<<" "<<c<<"\n";
	if(t == 8) {
		ok = 1;
		return;
	}

	if(mat[r][c][t] == t) {
		return;
	}
	
	for(int i = 0 ; i < 9 ; i++) {
		int x = r + dx[i], y = c + dy[i];
		if(x >= 0 && x < 8 && y >= 0 && y < 8) {
			if(mat[x][y][t+1] != t + 1 && mat[x][y][t] != t) {
				go(t+1, x,y);
			}
		}
	}

}

void solve() {
	mem(mat , -1);
	for(int i = 0; i < 8 ; i++) {
		cin>>s[i];
	}

	for(int i = 0; i < 8 ; i++) {
		for(int j = 0 ; j < 8 ; j++) {
			if(s[i][j] == 'S') {
				for(int t = 0 ; t < 8 ; t++) {
					if(i+t > 7) {
						break;
					}
					mat[i+t][j][t] = t;
				}
			}
		}
	}

	go(0,7,0);

	if(ok) {
		cout<<"WIN\n";
	} else {
		cout<<"LOSE\n";
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