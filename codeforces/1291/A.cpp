#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N];


void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int st = 0;
    for(int i = 0; i < n ; i++) {
        if(st == 0) {
            ans.push_back(s[i]);
            if((s[i] - '0') % 2) {
                st = 1;
            }
        } else if (st == 1) {
            ans.push_back(s[i]);
            if((s[i] - '0' ) % 2) {
                cout<<ans<<"\n";
                return;
            }
        }
    }
    cout<<-1<<"\n";
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