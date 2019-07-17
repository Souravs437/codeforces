#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
ll p1 = -1, p2 = -1, n;


void solve(){
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; ++i)
    {
        if(a[i] > a[i+1]) {
            p1 = i;
            for (int j = i; j < n - 1; ++j)
            {
                if(a[j] < a[j + 1]){
                    p2 = j;
                    break;
                }
            }
            if(p1>-1 && p2 == -1) {
                p2 = n - 1;
            } 
        }
        if(p2 > -1){
            break;
        }
    }

    if(p1 > -1){
        sort(a+p1 , a+p2+1);
    }

    for (int i = 0; i < n -1; ++i)
    {
        if(a[i] > a[i+1]){
            cout<<"no"<<"\n";
            return;
        }
    }
    if(p1 == -1) {
        cout<<"yes"<<"\n"<<1<<" "<<1<<"\n";
    }
    else {
        cout<<"yes"<<"\n"<<p1+1<<" "<<p2+1<<"\n";
    }
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