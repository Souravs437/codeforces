#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , min , max , count = 0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    min = a[0];
    max = min;
    for (int i = 1; i < n-1; ++i)
    {
        if(a[i] < min)
        {
            count++;
            min = a[i];
        }
        else if(a[i] > max)
        {
            count++;
            max =a[i];
        }
    }
    if(max < a[n-1])
        count++;
    else if(min > a[n-1])
        count++;
    cout<<count;
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