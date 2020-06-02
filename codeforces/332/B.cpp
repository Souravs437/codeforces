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

ll n , k;
ll arr[N];
ll dp[N][3];
ll ans[2] , val;
ll sol(int idx , int t) {
    if(idx == n + 1) {
        if(t == 2) {
            return 0;
        } else {
            return -inf;
        }
    }
    if(idx > n) {
        return -inf;
    }

    if(dp[idx][t] + 1) {
        return dp[idx][t];
    }
    if(t == 0 && idx >= k && idx <= n) {
        ll xx = arr[idx] - arr[idx - k] + sol(idx + k , 1);
        ll yy = sol(idx + 1, t);
        return dp[idx][t] =  max(xx,yy);
    } else if (t == 1){
        ll xx = arr[idx] - arr[idx - k];
        ll yy = sol(idx + 1, t);
        return dp[idx][t] = max(xx, yy);
    }
}

void trace(int idx , int t) {
    if(idx == n + 1) {
        return;
    }
    if(val == 2) {
        return;
    }
    if(t == 0 && idx >= k && idx <= n) {
        //cout<<dp[idx][t]<<"\n";
        if(dp[idx][t] == (arr[idx] - arr[idx - k] + dp[idx + k][1])) {
            ans[val++] = idx - k + 1;
            trace(idx + k , 1);
        } else {
            trace(idx + 1, t);
        }
    } else if(t == 1) {
        if(dp[idx][t] == arr[idx] - arr[idx - k]) {
            ans[val++] = idx - k + 1;
        } else {
            trace(idx + 1, t);
        }
    }
}

void solve() {
    cin>>n>>k;
    for(int i = 1; i <= n ; i++) {
        cin>>arr[i];
    }

    for(int i = 1; i <= n ; i++) {
        arr[i] += arr[i-1];
    }
    mem(dp , -1);
    ll mm = sol(k , 0);
    //cout<<mm<<"\n";
    trace(k, 0);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
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