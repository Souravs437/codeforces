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

struct inv {
    int l , r;
};

inv interval[200];

int k = 0;

int vis[200];

void  dfs(int node) {
    vis[node] = 1;
    for(int i = 1 ; i <= k ; i++) {
        if(vis[i]) {
            continue;
        }
        if(interval[i].l < interval[node].l && interval[i].r > interval[node].l) {
            dfs(i);
        } else {
            if(interval[i].l < interval[node].r && interval[node].r < interval[i].r) {
                dfs(i);
            }
        }
    }
}

void solve() {
    ll n;
    cin>>n;
    for(int i = 0; i < n ; i++) {
        ll t ,x,y;
        cin>>t;
        if(t == 1) {
            k++;
            cin>>interval[k].l>>interval[k].r;
        } else {
            cin>>x>>y;
            mem(vis , 0);
            dfs(x);
            if(vis[y]) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
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