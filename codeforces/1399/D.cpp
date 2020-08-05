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
    cin>>n;
    string s;
    cin>>s;
    stack<int> s1 ,s2;
    vector<int> ans(n);
    int on = 0;
    for(int i = 0; i < n ; i++) {
        if(s[i] == '0') {
            if(s1.empty() == 0) {
                ans[i] = s1.top();
                s1.pop();
                s2.push(ans[i]);
            } else {
                ans[i] = ++on;
                s2.push(ans[i]);
            }
        } else {
            if(s2.empty() == 0) {
                ans[i] = s2.top();
                s2.pop();
                s1.push(ans[i]);
            } else {
                ans[i] = ++on;
                s1.push(ans[i]);
            }
        }
    }
    cout<<on<<"\n";
    for(auto i : ans) {
        cout<<i<<" ";
    }
    cout<<"\n";
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