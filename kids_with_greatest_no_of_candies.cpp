#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int>candies;  
    int n,extracandies;
    cin>>n;
    cin>>extracandies;
    for(int i=0;i<n;i++)       
    {
        int p;
        cin>>p;
        candies.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cout<<candies[i]<<" ";
    }
    cout<<endl;
    vector<bool>result;
/*  for(int i=0;i<n;i++)                        //method-1
    {  
        int flag=0;
        int check=candies[i]+extracandies;
        for(int j=0;j<n;j++)
        {
            if(check<candies[j])
            {
               flag=-1;
               break;
            }
        }
        if(flag==0)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    // time complexity O(n^2) and space complexity O(n).
*/
    int maxi=*max_element(candies.begin(),candies.end());            // method-2
    for(int i=0;i<n;i++)
    {
        if((candies[i]+extracandies)>=maxi)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    // time complexity O(n) and space complexity O(n).
    
}