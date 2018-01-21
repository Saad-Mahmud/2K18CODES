https://agc020.contest.atcoder.jp/tasks/agc020_c
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
typedef unsigned long long ll;
typedef pair<int,int>PI;
typedef pair<int,pair<int,int>>PII;
const int mx=4e6+10;
bitset<mx> dp;
int main()
{
    int k,in,sum=0;
    cin>>k;
    dp[0] = 1;
    for (int i=0;i<k;i++)
    {
        cin>>in;
        dp = dp|(dp<<in);
        sum+=in;
    }
    sum=(sum+1)/2;
    for (int i=sum;i<mx;i++)
    {
        if (dp[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
