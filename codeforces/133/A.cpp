#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s2="HQ9";
    cin>>s;
    if(s.find_first_of(s2)!=-1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}