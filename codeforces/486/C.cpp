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
    ll n , p;
    cin>>n>>p;
    string s;
    cin>>s;
    vector<ll> arr((n/2) + 1);
    int f = -1 , l = -1;
    ll ans = 0;
    for(int i = 0; i < n/2;i++) {
        if(s[i] != s[n - i - 1]) {
            if(f == -1) {
                f = i;
            }
            l = i;
            ll xx = abs(s[i] - s[n-i - 1]);
            ll yy = abs((min(s[i] , s[n-1-i]) - 'a') + (26 - (max(s[i] , s[n-i-1]) - 'a'))) %26;
            arr[i] = min(xx,yy);
            ans += arr[i];
        }
    }

    if(n%2 == 0 && p == 1 + (n/2)) {
        p--;
    }

    // cout<<f<<" "<<l<<"\n";
    
    if(!ans) {
        cout<<ans<<"\n";
        return;
    }

    ans += abs(f - l);

    p--;

    if(p > n/2) {
        p = n - p - 1;
    }

    //cout<<p<<"\n";

    ans += min(abs(p - l) , abs(p - f));
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