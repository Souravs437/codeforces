#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll x1 , x2, x3, x4, y1, y2, y3, y4 , my , mx;
    cin>>x1>>y1>>x2>>y2;
    mx = x2 - x1;
    my = y2 - y1;
    ll d = mx*mx - my*my;
    d = abs(d);
    d = sqrt(d);
    if(mx == 0 || my == 0) {
    if(mx == 0) {
        y3 = y1;
        y4 = y2;
        x3 = x1 + d;
        x4 = x2 + d;
    }
    if(my == 0) {
        x3 = x1;
        x4 = x2;
        y3 = y1+d;
        y4 = y2 + d;
    }}
    else
    {
        if(abs(x2 - x1) != abs(y2 - y1)){
            cout<<"-1";
            return;
        }
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
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