#include<bits/stdc++.h>
using namespace std;
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define ULL unsigned LL
#define PI 2.0*acos(0.0)
typedef long long LL ;

#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()

#define InpOut freopen("A.in","r",stdin),freopen("A1.out","w",stdout)
#define _cin ios_base::sync_with_stdio(0); cin.tie(0)
#define cp printf("***** here here here here *****\n");


#define S1(a) a=in<int>()
#define SL1(a) a=in<LL>()
#define S2(a,b) a=in<int>(),b=in<int>()
#define SL2(a,b) a=in<LL>(),b=in<LL>()
#define S3(a,b,c) a=in<int>(),b=in<int>(),c=in<int>()
#define SL3(a,b,c) a=in<LL>(),b=in<LL>(),c=in<LL>()
#define F(i,a,b) for(int i=a;i<b; i++)
#define R(i,a,b) for(int i=a-1;i>=b; i--)


#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)

#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))

#define BitCnt(a) __builtin_popcountll(a)
#define MEM(a,val) memset(a,val,sizeof(a))


#define trace1(x)cerr << #x << ": " << x << endl;
#define trace2(x, y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#include<cstdio>
#include<cstring>
using namespace std;
char a[200],b[200];
int main(){
	scanf("%s%s",a,b);
	int len=strlen(a);
	printf("%c",a[0]);
	for(int i=1;i<len;i++)
	if(a[i]<b[0]){
		printf("%c",a[i]);
	}else
	break;
	printf("%c",b[0]);
}
