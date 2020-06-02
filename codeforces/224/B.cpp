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
    vector<int> arr(n);
    for(int i = 0; i < n ; i++) {
        cin>>arr[i];
    }
    int lo = 0;
    map<int,int> mp;
    for(int i = 0; i < n ; i++) {
        mp[arr[i]]++;
        if(mp.size() == k) {
            while(mp[arr[lo]] > 1) {
                mp[arr[lo]]--;
                lo++;
            }

            cout<<lo+1<<" "<<i+1<<"\n";
            return;
        }
    }

    cout<<"-1 -1"<<"\n";
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