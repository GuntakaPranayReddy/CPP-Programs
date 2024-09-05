#include<bits/stdc++.h>
using namespace std;
    void printNos(int i,int N)
    {
        //Your code here
        if(i>N)
        {
            return;
        }
        cout<<i;
        printNos(i+1,N);
    }
    void main()
    {
        int N;
        cin>>N;
        printNos(1,N);
        
        
    }