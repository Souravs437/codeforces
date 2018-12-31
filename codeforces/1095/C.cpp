#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    ll n , k;
    bool flag = true;
    cin>>n>>k;
    multiset<int>s;
    multiset<int> ::iterator it ;
    for (int i = 0; i < 32; ++i)
    {
        if(n&(1<<i))
        {
            s.insert(1<<i);
        }
    }
    if(s.size() > k)
    {
        cout<<"NO\n";
        flag = false;
    }
    else
        while(s.size() < k){
            it = s.end();
            --it;
            int val = *it;
            if(val == 1)
            {
                flag = false;
                cout<<"NO\n";
                break;
            }
            s.erase(it);
            s.insert(val/2);
            s.insert(val/2);
        }
    if(flag){
        cout<<"YES\n";
        for (it = s.begin(); it != s.end() ; it++) {
            cout<<*it<<" ";
        }
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