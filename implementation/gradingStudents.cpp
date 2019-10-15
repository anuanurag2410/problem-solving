#include <bits/stdc++.h>

using namespace std;
void studentgrades(int grades[],int n);
int main()
{
    
    int n;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++)
    {
        cin>>grades[i];
    }
    studentgrades(grades,n);
}

void studentgrades(int grades[],int n)
{
for(int i=0;i<n;i++)
{
    if(grades[i]>=38 && grades[i]%5>=3)
    {
        while(grades[i]%5!=0)
        {
            grades[i]++;
        }
    }
    cout<<grades[i]<<endl;
}
}
