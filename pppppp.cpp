/*
question is   
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=i;j<=n;j=j+i)
     {
        if(arr[j]==0)
        {
            arr[j]=1;
        }
        else
        {
            arr[j]=0;
        }
     }

    }
    for(int i=1;i<=n;i++)
    {
       if(arr[i]==1)
        {
           count++;
        } 
    }
    cout<<"The no of true's are present in the array = "<< count <<endl;
}