#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],count=0,cn=0,countt=0;
    cin>>n;
    for(int i=0 ; i< n; i++)
    {
        cin>>a[i];
        count+=a[i];
    }
    sort(a,a+n);
    for(int i = n-1; i >= 0 ;i--)
    {
        if(count >= countt)
        {
            count=count-a[i];
            countt+=a[i];
            cn++;
        }
        else
            break;
    }
    cout<<cn;
    return 0;
}