#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , k, min , max , rem ;
    cin>>n>>k;
    rem = n % k;
    ll mem = n / k;
    if(mem == 1) {
        min = rem;
    }
    else {
        min = mem * (mem - 1) ;
        min /= 2;
        min = min * (k - rem);
        ll temp = (mem + 1) * mem;
        temp /= 2;
        temp = temp * rem;
        min += temp;
    }

    if(n - k) {
        max = (n - k + 1) * (n - k);
        max /= 2;
    }
    else {
        max = 0;
    }

    cout<<min<<" "<<max <<"\n";
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