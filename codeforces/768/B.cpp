#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N];
ll n , l , r , idx = 1;
ll dfs(ll num, ll le , ll ri) {

    ll left = num / 2, right = num / 2 , center = num % 2;
    if(le >= l && ri <= r) {
        return num;
    }
    if(le > r || ri < l) {
        //cout<<"Fd";
        return 0;
    }

    num /= 2;
    int cnt = 0;
    while(num) {
        num >>= 1;
        cnt++;
    }
    
    ll lo = pow(2, cnt) - 1;
    ll cen = lo + le;
    ll ans = 0;
    
    ans += dfs(left, le, cen - 1);
    ans += dfs(center , cen , cen);
    ans += dfs(right, cen + 1, ri);

    return ans;
}

void solve(){
    cin >> n >> l >> r;
    int cnt =0 ;
    ll nn = n;
    while(nn) {
        nn >>= 1;
        cnt++;
    }
    res = dfs(n , 1 , pow(2 , cnt) - 1);
    cout<<res<<"\n";
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}