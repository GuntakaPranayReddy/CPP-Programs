#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    vector<int>arr1;
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
    for(int i=0;i<n;i++)
    {
        int j=i,sum=0,p=0;
        while(j<n)
        {
            if(sum<target)
            {
                 sum=sum+arr[j];
                 p=p+1;
            }
            if(sum==target)
            {
                if(p>count)
                {
                    count=p;
                }
            }
            
            j++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // time complexity is O(n^2) ans space complexity is O(1).

}