#include<bits/stdc++.h>
#define F(i,a,b) for(i=a;i<=b; i++)
using namespace std;
long long n , m ;
int main()
{
    long long i;
    cin>>n ;
    long long cnt = 0 ;
    F( i , 1 , n )
    {
        long long d = n - i ;
        if( d >= i && d % i == 0 )
        cnt ++ ;
    }
    cout << cnt ;
    return 0;
}
