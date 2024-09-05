#include<bits/stdc++.h>
using namespace std;
void input_array(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void insertion_sort(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input_array(n,arr);
    cout<<"Before Sorting the array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(n,arr);
    cout<<"After Sorting the array : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}