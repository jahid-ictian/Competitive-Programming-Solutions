#include<bits/stdc++.h>
using namespace std;

#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
typedef long long LL ;
typedef unsigned long long ULL ;

#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()

#define InpOut freopen("A.in","r",stdin),freopen("A1.out","w",stdout)
#define _cin ios_base::sync_with_stdio(0); cin.tie(0)
#define DBG printf("***** here here here here *****\n");


#define S1(a) a=in<int>()
#define SL1(a) a=in<LL>()
#define S2(a,b) a=in<int>(),b=in<int>()
#define SL2(a,b) a=in<LL>(),b=in<LL>()
#define S3(a,b,c) a=in<int>(),b=in<int>(),c=in<int>()
#define SL3(a,b,c) a=in<LL>(),b=in<LL>(),c=in<LL>()
#define F(i,a,b) for(i=a;i<b; i++)
#define R(i,a,b) for(i=a-1;i>=b; i--)


#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)

#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))

#define BitCnt(a) __builtin_popcountll(a)
#define MEM(a,val) memset(a,val,sizeof(a))


template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
long long Bigmod(long long base, long long power, long long MOD){long long ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
template <typename T> LL isLeft(T a,T b,T c) {return(a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y);}
long long ModInverse(long long number, long long MOD){return Bigmod(number, MOD-2, MOD);}
bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
bool isPrime( LL val ) { if( val == 2 ) return true ; if( val % 2 == 0 || val == 1 ) return false ; LL sqrt_N = (LL) ( ( double ) sqrt( val ) ) ; for( LL i = 3 ; i <= sqrt_N ; i += 2 ) { if( val % i == 0 ) return false ; } return true ; }
template<class T> string convert(T _input) { stringstream blah; blah << _input; return blah.str(); }

#define PUL pair<ULL,ULL>
#define PLL pair<LL,LL>
#define PII pair<int,int>
#define MX 200005
#define MOD 1000000007
#define INF 2000000000000000LL
#define EPS 1e-9

// Month
map<string , LL>month ;
void Month() { month["January"] = 1 , month["February"] = 2 , month["March"] = 3 , month["April"] = 4 , month["May"] = 5 , month["June"] = 6 ; month["July"] = 7 , month["August"] = 8 , month["September"] = 9 , month["October"] = 10 , month["November"] = 11 , month["December"] = 12 ; }

// Ordered set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(1)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5


/**.................................... Code starts Here .......................................**/

LL n , m ;

LL a[4099][2505] ;

int main()
{
    LL t , i , j , k , x , y ;
    //clock_t startTime = clock() ;
    SL1( n ) ;
    F( i , 0 , 4099 )
    {
        F( j , 1 , 2501 )
        {
            a[i][j] = ( ( i^j ) == 0? 1: 0 ) ;
        }
        F( j , 1 , 2501 )
        {
            a[i][j] = a[i][j] + a[i][j-1] ;
        }
    }
    LL res = 0 ;

    F( i , 1 , n + 1 )
    {
        F( j , i , n + 1 )
        {
            LL d1 = i + j - 1 ;
            LL Mx = min( d1 , n ) ;
            LL d2 = abs( i - j ) + 1 ;
            LL Mn = max( d2 , j ) ;
            LL Xor = ( i^j ) ;
            if( Mx >= Mn )
            {
                res += ( a[Xor][Mx] - a[Xor][Mn - 1] ) ;
            }
        }
    }

    printf("%lld\n",res) ;
    //cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;

    return 0;
}
