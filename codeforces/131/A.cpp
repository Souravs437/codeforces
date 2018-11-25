#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
    bool flag =false;
    string s1 ;
    cin>>s1;
    for (int i = 0; i < s1.size(); ++i)
    {
        if(isupper(s1[i]))
            continue;
        else
        {
            flag = true;
            break;
        }
    }
    if(!flag)
        transform( s1.begin() , s1.end() , s1.begin() , :: tolower);
    else
        if(islower(s1[0]))
        {
            bool flag2 = true;
            for (int i = 1; i < s1.size(); ++i)
            {
                if(isupper(s1[i]))
                    continue;
                else
                    {
                        flag2 = false;
                        break; 
                    }   
            }
            if(flag2)
            {
                transform(s1.begin() + 1 , s1.end() , s1.begin() + 1 , ::tolower);
                s1[0] -= 32 ;
            }
        }
    cout<<s1;
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