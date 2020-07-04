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
	ll n , m;
	cin>>n>>m;
	ll arr[n][m];
	for(int i = 0; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin>>arr[i][j];
		}
	}
	vector<vector<int>> mat(n , vector<int>(m , 0)) ;

	mat[0][0] = mat[0][m-1] = mat[n-1][0] = mat[n-1][m-1] = 2;
	for(int i = 1 ; i < n - 1; i++) {
		mat[i][0] = mat[i][m-1] = 3;
	}
	for(int i = 1 ; i < m - 1 ; i++) {
		mat[0][i] = mat[n-1][i] = 3;
	}

	for(int i = 1; i < n - 1; i++) {
		for(int j = 1; j < m - 1; j++) {
			mat[i][j] = 4;
		}
	}

	for(int i = 0 ; i < n ; i++) {
		for(int j = 0; j < m ; j++) {
			if(mat[i][j] < arr[i][j]) {
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
	for(int i = 0; i < n ; i++) {
		for(int j = 0; j < m ; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
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