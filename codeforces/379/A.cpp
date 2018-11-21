#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , m , sum = 0;
    cin>>n>>m;
    sum = n;
    for (int i = n ; i >= m ; i)
    {
        int temp =i %m;
        i = i/m;
        sum += i;
        i = temp +i;
    }
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