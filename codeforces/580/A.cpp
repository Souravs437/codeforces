#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> ard;
int main()
{
long long  n,i,temp=0 , a[100000];
memset(a , 0 , 100000);
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a[i];
    if(a[i]>=a[i-1])
        temp++;
    if(a[i]<a[i-1])
    {
        ard.push(temp);
        temp=1;
    }
}
ard.push(temp);
cout<<ard.top();
}