#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w,temp=0;
    cin>>k>>n>>w;
    for(int i =1 ; i <= w;i++)
        temp+=k*i; 
    if(temp-n>0)
        cout<<temp-n;
    else
        cout<<0;
    return 0;
}