#include<bits/stdc++.h>
using namespace std;
void merge_sort(int low,int  mid,int high,vector<int> &arr) // we should always call the vector variable as pass by reference.
{ 
    vector<int> temp; // temporary array (for the elements temporarily)
    int left= low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
          temp.push_back(arr[left]);
          left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;

        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
          left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;

    }
    for(int i=low;i<=high;i++) // shifting array elements into the original array
    {
        arr[i]=temp[i-low];
    }

}
void ms(int low,int high,vector<int> &arr)
{
    if(low == high)
    {
      return;
    }
     int mid=(low+high)/2;
    ms(low,mid,arr);
    ms(mid+1,high,arr);
    merge_sort(low,mid,high,arr);
}
int main()
{
  int n;
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
    ms(0,n-1,arr);
    cout<<"After Sorting the array : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}