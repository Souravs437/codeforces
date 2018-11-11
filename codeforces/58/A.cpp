#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,sc ="hello";
    int flag=0;
    cin>>s;
    int k =0;
    for(auto i = s.begin() ; i != s.end() ; i++ )
        {
            if(*i==sc[k])
                k++;
        }
    cout<<(k==5?"YES":"NO");
    return 0;
}
