#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(auto i = s.length()/2;i<s.length();i++)
        if(i!=s.length()-1)
            cout<<s[i]<<"+";
        else
            cout<<s[i];
}
