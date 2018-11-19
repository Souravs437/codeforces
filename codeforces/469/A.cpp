#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll p[10000] = {0} , n , count = 0, m , a,x;
    bool flag = true;
    cin>>n>>m;
    for (int i = 0; i < m; ++i)
    {
        cin>>x;
        p[x] = 1;
    }
    cin>>a;
    for (int i = 0; i < a; ++i)
    {
        cin>>x;
        p[x] =  1;
    }
    for (int i = 1; i <= n ; ++i)
    {
        if( p[i] != 1)
        {
            flag = false;
        }
    }
    if(flag)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
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