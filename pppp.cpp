#include<bits/stdc++.h>
using namespace std;
  /* void printNos(int i,int N)
    {
        //Your code here
        if(i>N)
        {
            return;
        }
        cout<<i<<" ";
        printNos(i+1,N);
    }
   int main()
    {
        int N;
        cin>>N;
        printNos(1,N);
        
        
    }*/
     void printNos(int N)
    {
        //Your code here
        int i=1;
        if(i>N)
        {
          return;
        }
        cout<<i<<" ";
     
        printNos(N-1);
    }
    int main()
    {
        int N;
        cin>>N;
        printNos(N);
        
    }