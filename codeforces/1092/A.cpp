#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    int a[101] = {0};
    char ch = 97;
    ll n , k;
    ll temp = 0;
    cin>>n>>k;
    for (int i = 0; i < n; ++i, temp++)
    {
        a[temp]++;
        if(temp == k - 1)
        {
            temp = -1;
        }
    }
    
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < a[i]; ++j)
        {
            cout<<ch;
        }
        ch++;
    }
    cout<<endl;
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