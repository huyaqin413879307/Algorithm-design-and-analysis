#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    int i,j,alen,blen;
    int dp[100][100];
    string a;
    string b;
    int p;
    cin>>n;
    for(p=1;p<=n;p++)
    {
        cin>>a>>b;
        alen=a.size();
        blen=b.size();
        for(i=alen;i>0;i--)
            a[i]=a[i-1];
        for(i=blen;i>0;i--)
            b[i]=b[i-1];
        for(i=0;i<=alen;i++)
        {
            dp[0][i]=0;
        }
        for(i=0;i<=blen;i++)
        {
            dp[i][0]=0;
        }
        for(i=1;i<=blen;i++)
        {
           for(j=1;j<=alen;j++)
           {
               dp[i][j]=b[i]==a[j]?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
           }
        }
        printf("%d\n",dp[i-1][j-1]);
    }
    return 0;
}

