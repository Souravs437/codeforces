#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5],ans=0,c,r;
    for(int i =0 ;i <5; i++)
        for(int j =0 ;j <5 ; j++)
        {   
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                c=i+1;r=j+1;
            }
        }
        c=3-c;
        if(c<0)
            c=-c;
        r=3-r;
        if(r<0)
            r=-r;
        c=c+r;
        cout<<c;
        return 0;
}