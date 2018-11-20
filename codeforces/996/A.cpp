#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , sum = 0;
    cin>>n;
    sum += n/100;n = n%100;
    sum += n/20; n = n% 20;
    sum += n/10 ; n = n %10;
    sum += n/5 ; n = n%5;
    sum += n/1 ; n = n%1;
    cout<<sum;  
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