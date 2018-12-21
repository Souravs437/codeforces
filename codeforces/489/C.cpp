#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll lk1[N] = {0};
ll lk[N] = {0};

ll find_s(ll n, ll s)
{
    if(s == 0)
    {
        if(n == 1)
            return 0;
        else
            return -1;
    }
    if(s > 9 * n)
        return -1;
    else{
    s -= 1;

    for (int i = n-1; i > 0; --i)
    {
        if(s > 9){
            lk1[i] = 9;
            s -= 9;
        }
        else{
            lk1[i] = s;
            s = 0;
        }
    }
    lk1[0] = 1 + s;
    return 0;
}
}

ll find_m(ll n , ll s)
{
    if(s == 0)
    {
        if(n==1)
            return 0;
        else
            return -1;
    }
    if(s > 9 * n)
        return -1;
    else
    {
        ll k;
        if(s > 9)
            k = 9, s -= 9;
        else
            k = s, s = 0;
        for (int i = 1; i < n ; ++i)
        {
            if(s > 9)
            {
                lk[i] = 9;
                s -= 9;
            }
            else
            {
                lk[i] = s;
                s = 0;
            }
        }
        lk[0] = k ;
        return 0;
    }
}



void solve(){
    ll n , s;
    cin>>n>>s;
    ll ress = find_s(n,s);
    ll resm = find_m(n,s);
    if(ress != -1 && resm != -1){
        for (int i = 0; i < n; ++i)
        {
            cout<<lk1[i];
        }
        cout<<" ";
        for (int i = 0; i < n; ++i)
        {
            cout<<lk[i];
        }
    }    
    else
        cout<<"-1 -1";
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