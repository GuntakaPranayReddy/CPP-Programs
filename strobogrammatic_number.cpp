#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='2' || s[i]=='4' || s[i]=='5' || s[i]=='7')
        {
            flag=0;
            break;
        }
        if((s[i]=='6' && s[n-i-1]=='9') || (s[i]=='9' && s[n-i-1]=='6') || s[i]=='0' || s[i]=='1' || s[i]=='3' || s[i]=='8')
        {
            flag=1;     
       }
    }
    if(flag==0)
    {
        cout<<"false"<<endl;
    }
    else
    {
         cout<<"true"<<endl;
    }
}
