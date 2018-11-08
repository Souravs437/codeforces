#include<iostream>

using namespace std;
#define MAX 10000
int main()

{
    int n ,arr[MAX][3],i,count=0;
    cin>>n;
    for( i= 0 ; i< n ;i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for( i =0 ; i< n ;i++)
    {
        if( (arr[i][0]+arr[i][1]+arr[i][2])>=2)
            count++;
    }
    cout<<count;
    return 0;
}