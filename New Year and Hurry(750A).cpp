#include <bits/stdc++.h>
#define ll long long
#define babab printf("!!!!!\n");
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
   ll n,k;
   cin>>n>>k;
   k=240-k;
   int ans=0;
   for(int i=1;i<=n;i++)
   {
       if(k>=i*5)
       {
           k-=i*5;
           ans++;
       }
       else
        break;
   }
   cout<<ans<<endl;
}
