#include <bits/stdc++.h>

using namespace std;
// Complete the kangaroo function below.
void kangaroo(int x1, int v1, int x2, int v2) {
if((x1<x2&&v1<v2)|| (x1>x2&&v1>v2)||(x1<x2&&v1==v2))
{
    cout<<"NO";
    exit(0);
}
    while(true){
        if((x2 > x1 && v2 > v1) || (x1 > x2 && v1 > v2) || v1 == v2){
            cout << "NO" << endl;
            break;
        }
        if((x1 += v1) == (x2 +=v2)){
            cout << "YES" << endl;
            break;
        }
}
}

int main()
{
   int x1,v1,x2,v2;

   cin>>x1>>v1>>x2>>v2;
   kangaroo(x1,v1,x2,v2); 
    return 0;
}
