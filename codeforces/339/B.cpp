#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , p,steps = 0;
    cin>>n>>p;
    for (int i = 0; i < p; ++i)
    {
        cin>>a[i];
    }
    steps = a[0] - 1;
    for (int i = 0; i < p-1 ; ++i)
    {
        if(a[i] != a[i+1])
        {

            if(a[i] > a[i+1])
            {
                steps += n - a[i] + a[i+1];
            }
            else
                steps += a[i+1] - a[i];
        }
        else
            continue;
            
    }
    cout<<steps;

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