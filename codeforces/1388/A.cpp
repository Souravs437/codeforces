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
ll n;
ll pp[] = {6,10,14,22,15,21,33,35,55,77};

ll fun(ll rem) {
    if(rem == 0) {
        return 0;
    }
    ll cnt = 0 , fl = 0;
    while(rem%2 == 0) {
        if(!fl) {
            cnt++;
        }
        rem/=2;
    }

    for(int i = 3; i <= sqrt(rem) ; i+=2) {
        fl = 0;
        while(rem%i == 0) {
            if(!fl) {
                cnt++;
            }
            rem /= i;
        }
    }

    if(rem > 1) {
        cnt++;
    }
    return cnt;
}


map<pair<ll, pair<ll,ll>> , ll> mp;
bool go(ll sum , ll idx , ll tt) {
    if(idx == 8) {
        ll rem = n - sum;
        if(rem < 0 || tt != 3) {
            return false;
        }
        //cout<<rem<<"\n";
        ll cnt = fun(rem);
        return cnt != 2;
    }

    if(mp.count({sum,{idx,tt}})) {
        return mp[{sum,{idx,tt}}];
    }
    ll xx = go(sum + pp[idx] , idx+1 , tt + 1);
    ll yy = go(sum , idx + 1,tt);
    return mp[{sum,{idx,tt}}] = max(xx,yy);
}

void goo(ll sum , ll idx , ll tt) {
    if(idx == 8) {
        ll rem = n - sum;
        cout<<rem<<"\n";
        return;
    }

    if(mp[{sum + pp[idx] , {idx + 1 , tt + 1}}]) {
        cout<<pp[idx]<<" ";
        goo(sum + pp[idx], idx+1,tt+1);
    } else {
        goo(sum , idx+1, tt);
    }

}

void solve(){
    cin>>n;
    for(int i = 0; i < 10 ; i++) {
        for(int j = 0 ; j < 10 ; j++) {
            if(i == j) continue;
            for(int k = 0; k < 10; k++) {
                if(i == k || j == k) continue;
                ll sum = pp[i] + pp[j] + pp[k];
                ll rem = n - sum;
                if(sum >= n || rem == pp[i] || rem == pp[j] || rem == pp[k]) continue;
                else {
                    cout<<"YES\n";
                    cout<<pp[i]<<" "<<pp[j]<<" "<<pp[k]<<" "<<rem<<"\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
    mp.clear();
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}