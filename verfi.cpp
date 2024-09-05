#include<bits/stdc++.h>
using namespace std;
int main()
{
   float n,m;
   cin>>m;    // value
   string s=to_string(m);
   cin>>n;  // nth root
   float p= pow(m,n);
   string k=to_string(p);
   int i=k.size();
   while(i<s.size())
   {
      k+='0';
      i++;
   }
   p=stoi(k);
   cout<<p<<endl;
}