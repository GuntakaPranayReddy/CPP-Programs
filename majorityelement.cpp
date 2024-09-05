#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"size of the arr(n) = ";
    int n;
    cin>>n;
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
    unordered_map<int,int>count;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    arr.clear();
    for(auto it: count)
    {
        if(it.second>n/3)
        {
            arr.push_back(it.first);
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}