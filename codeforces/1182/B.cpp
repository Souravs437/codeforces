#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];
char mat[500][500];
ll ver = 0 , hor = 0, h , w,tot_str = 0, str_sz = 0  ; 

int left(){
    int count(0);
    int i = hor , j = ver-1;
    while(1){
        if(mat[i][j] == '*'){
            count++;
            j--;
            if(j == -1)
                break;
        }
        else
            break;
    }
    return count;
}

int right(){
    int count(0);
    int i = hor , j = ver+1;
    while(1){
        if(mat[i][j] == '*'){
            count++;
            j++;
            if(j == w)
                break;
        }
        else
            break;
    }
   // cout<<count<<endl;
    return count;   
}

int up(){
    int count(0);
    int i = hor-1, j = ver;
    while(1){
        if(mat[i][j] == '*'){
            count++;
            i--;
            if(i == -1)
                break;
        }
        else
            break;
    }
   // cout<<count<<endl;
    return count;
}

int down(){
    int count(0);
    int i = hor + 1, j = ver;
    while(1){
        if(mat[i][j] == '*'){
            count++;
            i++;
            if(i == h)
                break;
        }
        else
            break;
    }
   // cout<<count<<endl;
    return count;
}

void ans(){
    if(str_sz == tot_str)
        cout<<"YES";
    else
        cout<<"NO";
    //cout<<tot_str<<" "<<str_sz;
}

void count(){
    ll siz(0);
    bool flag = false;
    siz += left();
    siz += right();
    siz += up();
    siz += down();
    if(mat[hor][ver] == '*')
        siz++;
    //cout<<siz<<endl;
    str_sz = siz;
    ans();
}

void check(){
    for (int i = 1; i < h-1; ++i)
    {
        for (int j = 1; j < w -1; ++j)
        {
            if(mat[i][j] == '*'){
                if(mat[i][j+1] == '*' && mat[i][j-1] == '*' && mat[i -1][j] == '*' && mat[i +1][j] == '*')
                    {ver = j , hor = i ; break;}
            }
            else
                continue;
        }
        if(ver != 0 && hor != 0)
            break;
    }
    if(ver == 0 && hor == 0){
        cout<<"NO";
        exit(0);
    }
    count();
}

void solve(){
    cin>>h>>w;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin>>mat[i][j];
            if(mat[i][j] == '*')
                tot_str++;
        }
    }
    if(h < 3 && w < 3){
        cout<<"NO";
        exit(0);
    }
    check();
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