#include <bits/stdc++.h>

using namespace std;
void scorecalculate(int[],int);
int main()
{
    int n=0;
    cin>>n;
    int score[n];
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }

        scorecalculate(score,n);


    return 0;
}

void scorecalculate(int score[100],int n)
{
    int max=score[0];
    int min=score[0];
    int cm=0,cn=0;

    for(int i=0;i<n;i++)
    {
        if(max<score[i])
        {
            max=score[i];
            cm++;
        }
        if(min>score[i])
        {
            min=score[i];
            cn++;
        }
    }
    cout<<(cm)<<" "<<(cn);
}
