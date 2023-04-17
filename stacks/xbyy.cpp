#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,p,q;
    cin>>x>>y>>p>>q;
        //int ans=0;
        int ans= y/x;
        //int res=0;
        if( x<y)
        {
        if( ans / p==0)
           { if(ans/q==0)
              
              {
                int res = p *q;
                 cout<<res;
              }
           }
        }
           else
           {
                cout<<-1;
           }


}