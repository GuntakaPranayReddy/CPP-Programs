#include<bits/stdc++.h>
using namespace std;
void input_array(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void selection_sort(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[i]>arr[j+1])
            {
                swap(arr[i],arr[j+1]);
            }
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
    selection_sort(n,arr);
    cout<<"After Sorting the array : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}