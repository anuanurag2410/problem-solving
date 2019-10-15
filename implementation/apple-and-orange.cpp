#include <bits/stdc++.h>

using namespace std;



// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b,int m,int n,int app[],int oran[])
{
int ac=0,oc=0;

for(int i=0;i<m;i++)
{
if((a+app[i]>=s)&&(a+app[i]<=t))
{
    ac++;
}
}

for(int i=0;i<n;i++)
{
if((b+oran[i]>=s)&&(b+oran[i]<=t))
{
    oc++;
}
}
cout<<ac<<endl;
cout<<oc;
}

int main()
{
int s,t,a,b,m,n;
cin>>s>>t;
cin>>a>>b;
cin>>m>>n;

int app[m],oran[n];
for(int i=0;i<m;i++)
{
    cin>>app[i];
}

for(int j=0;j<n;j++)
{
cin>>oran[j];
}

countApplesAndOranges(s,t,a,b,m,n,app,oran);
    return 0;
}
