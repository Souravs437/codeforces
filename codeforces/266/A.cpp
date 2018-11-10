#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int COUNT=0,n;
    cin>>n;
    cin>>str;
    for(auto i = str.begin();i!=str.end();i++)
    {
        if(*i==*(i+1))
            COUNT++;
    }
    cout<<COUNT;
    return 0;
}