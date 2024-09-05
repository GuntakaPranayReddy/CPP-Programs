#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"size of the arr(n) = ";
    int n,target;
    cin>>n;
    cout<<"The target is = ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count=0;
    // method-1 time limit exceeded (85/93) test cases were passed 
    //if we place long long inplace of int at count decleration the 87 will be passed
    for(int i=0;i<n;i++)
    {  int sum=0;
       for(int j=i;j<n;j++)
       {
          sum=sum+arr[j];
          if(sum==target)
          {
            count++;
          }
       }    
    }
    cout<<"The number of subarrays sum equal to given sum = ";
    cout<<count<<endl;
    // time complexity is O(n^2) ans space complexity is O(1).

}