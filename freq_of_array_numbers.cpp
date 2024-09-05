#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2)
        {
            if(p1.second>p2.second)
            {
                return true;
            }
            else if(p1.second==p2.second)
            {
                if(p1.first>p2.first)
                {
                    return true;
                }
            }
               return false;

        }
int main()
{   int n;
   
    cin>>n;
    vector<int> arr[n]; // we should not use static array
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

       vector<int> v(n);
        for(int i=0;i<n;i++)
        { 
            v[arr[i]-1]++;

        }
       vector<pair<int,int>> p;
        for(int i=0;i<n;i++)
        {
            p.push_back({i+1,v[i]});
        }
        sort(p.begin(),p.end(),comp);
        for(int i=0;i<n;i++)
        {
            cout<<p[i].first<< " "<<p[i].second<<endl;
        }
}