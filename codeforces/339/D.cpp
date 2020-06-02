//SkGeN
#include<iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<cstring>
#include<climits>
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> p64;
typedef vector<ll> v64;
const int N = 2 * 1e5 + 10;
const ll inf = 1e18 + 100;
const ll mod = 1e9 + 7;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

struct node {
    ll val , tp;
};

node tree[4 * N];
ll arr[N];
int idx , val;
void build(int st , int en , int tn) {
    if(st == en) {
        tree[tn].val = arr[st];
        tree[tn].tp = 0;
        return;
    }

    int mid = (st + en) >>1;
    build(st , mid , 2*tn);
    build(mid + 1, en , 2*tn + 1);

    if(tree[2*tn].tp == 0) {
        tree[tn].val = tree[2*tn].val | tree[2*tn+1].val;
        //cout<<tree[2*tn].val<<" "<<tree[2*tn + 1].val<<" "<<tn<<"\n";
        tree[tn].tp = 1;
    } else{
        tree[tn].val = tree[2*tn].val ^ tree[2*tn + 1].val;
        tree[tn].tp = 0;
    }
}

void update(int st , int en ,int tn) {
    if(st == en) {
        tree[tn].val = val;
        arr[st] = val;
        return;
    }

    int mid = (st + en) >> 1;

    if(mid >= idx) {
        update(st , mid , 2*tn);
    } else {
        update(mid + 1, en , 2 *tn + 1);
    }

    if(tree[2*tn].tp == 0) {
        tree[tn].val = tree[2*tn].val | tree[2*tn+1].val;
        
        tree[tn].tp = 1;
    } else{
        tree[tn].val = tree[2*tn].val ^ tree[2*tn + 1].val;
        tree[tn].tp = 0;
    }
    
}

void solve() {
    ll n , q;
    
    cin>>n>>q;
    n = pow(2 , n);
    for(int i = 1; i <= n ; i++) {
        cin>>arr[i];
    }
    build(1 , n , 1);
    for(int i = 0; i < q ; i++) {
        cin>>idx>>val;
        update(1 , n , 1);
        cout<<tree[1].val<<"\n";
    }
}
int main()
{
    DANGER;
    ll t = 1;
    //cin>>t;
    while(t--) {
        solve();
    }
return 0;
}
//---->O ,,