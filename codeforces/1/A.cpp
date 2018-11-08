#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
    long long n,m,a,sum_n,sum_m,tot;
    cin>>n>>m>>a;
    if(m==a&&n==a)
    {
        tot=1;
    }
    else
    {
        sum_n=n/a;
    if(n%a!=0)
        sum_n++;
    sum_m=m/a;
    if(m%a!=0)
        sum_m++;
        tot=sum_m*sum_n;
    }
    
    cout<<tot;
    return 0;
}
