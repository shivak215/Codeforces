#include <bits/stdc++.h>
using namespace std;
int main()
{long long i,n,b,d,s,a,e=0;
cin>>n>>b>>d;
s=0;
for(i=0;i<n;i++)
{
  cin>>a;	
  if(a<=b)
  s=s+a;
  if (s>d)
  {s=0;
   e++;}
}
cout<<e;
//under ask constructions
}
