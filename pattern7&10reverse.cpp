#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
     for(int i=1;i<=n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
               cout<<" ";
               
            }
            for(int j=0;j<(2*i-1);j++)
            {
                cout<<"*";   
            }
           
            cout<<""<<endl;
        }
        // mirror img of half diamond
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
               cout<<" ";
               
            }
            for(int j=0;j<i;j++)
            {
                cout<<"*";   
            }
           
            cout<<""<<endl;
        }
         for(int i=n;i>=1;i--)
        {
            for(int j=0;j<n-i;j++)
            {
               cout<<" ";
               
            }
            for(int j=0;j<i;j++)
            {
                cout<<"*";   
            }
           
            cout<<""<<endl;
        }
    
   
    
        } 
    
