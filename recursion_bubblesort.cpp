#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr,int n)
{
    if(n<=1)
    {
        return;
    }
    int i;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
   bubble_sort(arr,n-1);
}
int main()       // recursive bubble_sort
{
    int n;
    cout<<" size of the array = ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
      int p;
      cin>>p;
      arr.push_back(p);
    } 
    cout<<"Before Sorting the array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"After Sorting the array  : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}
/*
space complexity = O(N)
time complexity = O(N) for best case  (this will happens we array sorted in ascending order and in code if swapping doesnot takes place)
time complexity = O(N^2)for avg,worst case
*/ 