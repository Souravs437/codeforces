#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> x;
    for(int i =0; i < t; i++)
    {
        int input;
        cin>>input;
        x.push_back(input);
    }
    sort(x.begin(),x.end());
    for(int i =0 ;i < x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}