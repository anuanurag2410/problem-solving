#include <bits/stdc++.h>
#include<string.h>
using namespace std;


void timeConversion(string str) {
    int h1 = (int)str[1] - '0'; 
    int h2 = (int)str[0]-'0'; 
    int hh = (h2 * 10 + h1 % 10); 
    int n=str.length();

        if(str[n-2]=='A')
        {
           if(hh==12)
           {
               cout<<"00";
               for(int i=2;i<n-2;i++)
               {
               cout<<str[i];
               }
           }
            else
            {
                for(int i=0;i<n-2;i++)
                {
                    cout<<str[i];

                }
            }
           }
        

        else
        {
            if(hh==12)
            {
                cout<<"12";
                for(int i=2;i<n-2;i++)
                {
                    cout<<str[i];
                }
            }
            else
            {
                hh=hh+12;
                cout<<hh;
                for(int i=2;i<n-2;i++)
                {
                    cout<<str[i];
                }
            }
        }
}

int main() 
{ 
    
   string str; 
   getline(cin,str);
   timeConversion(str); 
   return 0;
} 
