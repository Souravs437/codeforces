#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i , o ,sp=0,temp=0,n,temp1 =0;
    cin>>n;
    for( auto in =0 ; in < n ;in++)
    {
        cin>>o>>i;
        temp=i-o;
        temp1=temp+temp1;
        if(temp1>sp)
            sp=temp1;
    }
    cout<<sp;
}
