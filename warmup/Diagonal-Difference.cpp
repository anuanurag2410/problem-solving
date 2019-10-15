#include <bits/stdc++.h>
#define max 100
using namespace std;


/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr[][max],int n)
 {
int lsum=0,d=0,rsum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){
                lsum+=arr[i][j];

            }
            if(i==n-j-1)
            {
                rsum+=arr[i][j];
            }
        }
    }
    
    return abs(lsum-rsum);
}

int main()
{
int n,arr[max][max];
cin>>n;

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    cin>>arr[i][j];
}
}
int result=diagonalDifference(arr,n);
cout<<result;

}
