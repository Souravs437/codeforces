#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<char> st;
    string s;
    cin>>s;
    for(auto i =s.begin();i!=s.end();i++)
    {
        st.insert(*i);
    }
    if(st.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}