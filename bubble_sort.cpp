#include<bits/stdc++.h>
using namespace std;
void input_array(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void bubble_sort(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
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
    bubble_sort(n,arr);
    cout<<"After Sorting the array : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}