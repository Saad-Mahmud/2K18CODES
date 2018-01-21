//http://codeforces.com/contest/165/problem/E
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

int n;
vector<int>arr;
int p[(1<<22)+10];

int main()
{
    int v1;
    isc(n);
    rept(i,0,n)
    {
        isc(v1);
        arr.PB(v1);
        p[v1]=v1;
    }
    for(int i = 0; i < 22; ++i)
    {
        for(int mask = 0; mask < (1<<22); ++mask)
        {
            if(mask & (1<<i))
            {
                if(p[mask^(1<<i)])p[mask]=p[mask^(1<<i)];
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        unsigned temp=arr[i];
        temp=(~temp);
        temp=(temp<<10)>>10;
        if(p[temp])printf("%d ",p[temp]);
        else printf("-1 ");
    }
    puts("");
    return 0;
}
