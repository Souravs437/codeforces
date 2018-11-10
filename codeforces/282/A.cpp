#include<iostream>
#include<string>

using namespace std;
#define MAX 200
int main()

{
    string str;
    int x=0,n;
    cin>>n;
    for( int i =0 ; i < n ; i++ )
    {
        cin>>str;
        if(str=="X++")
            x++;
        else if(str=="--X")
            --x;
        else if(str=="++X")
            ++x;
        else if(str=="X--")
            x--;
            
    }
    cout<<x;
    return 0;
}
