//https://www.hackerearth.com/practice/algorithms/dynamic-programming/bit-masking/practice-problems/algorithm/special-pairs-7/
#include<bits/stdc++.h>
using namespace std;
#define loop(i,L,R) for(int i=(L);i<=(R);i++)
#define rept(i,L,R) for(int i=(L);i<(R);i++)
#define isc(n) scanf("%d",&n)
#define llsc(n) scanf("%lld",&n)
#define dsc(n) scanf("%lf",&n)
#define enl cout<<endl
#define PB(x) push_back(x)
#define MP(x,y) make_pair(x,y)
#define xx first
#define yy second
typedef long long ll;
typedef pair<int,int>PI;
typedef pair<pair<int,int>,int>PII;
 
int F[(1<<20)+10];
int A[(1<<17)+10];
int main()
{
	int t;
	isc(t);
	while(t--)
	{
		int n;
		isc(n);
		rept(i,0,n)isc(A[i]);
		memset(F,0,sizeof F);
		for(int i=0;i<n;++i)F[A[i]]++;
		//rept(i,0,64)cout<<F[i]<<" ";
		//enl;
		for(int i=0;i<20;++i)
		{
			 for(int mask=0;mask<(1<<20);++mask)
			 {
				if(mask & (1<<i))F[mask] += F[mask^(1<<i)];
			 }
		}
		ll ans=0;
		for(int i=0;i<n;++i)ans+=F[A[i]^((1<<20)-1)];
		printf("%lld\n",ans);
	}
	return 0;
}
