#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &arr,int n)
{
    if(n<=1)
    {
        return;
    }
    int i=arr.size();  // for knowing the size of the array
    int j=i-n;
    while(j>=0 && arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
        j--;
    }
   insertion_sort(arr,n-1);
}
int main()       // recursive insertion_sort
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
    insertion_sort(arr,n);
    cout<<"After Sorting the array  : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}
/*
space complexity = O(N)
time complexity = O(N) for best case(this will happens we array sorted in ascending order and in code while loop doesnot run in this case)
time complexity = O(N^2)for avg,worst case
*/ 