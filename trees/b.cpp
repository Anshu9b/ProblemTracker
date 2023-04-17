#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
int t;
cin>>t;
while(t--)
{

string s;
cin>>s;

ll n=s.size();
ll count=0;
for(int i=0;i<s.size();i++){
  if(s[i]=='1')count++;
}

if(count==s.size())
cout<<n*n<<"\n";
else 
{
ll cmt=0,x=0,i=0;
count=0;
  while(true)
  {
    if(s[i%n]=='1')
    count++;
    else 
    {
      cmt=max(cmt,count);
      count=0;
    }
    cmt=max(cmt,count);
    i++;
    x++;
    if(x>=n && s[i%n]=='0')
    break;
  }
  cmt=max(cmt,count);
  cout<<((cmt+1)*(cmt+1))/4<<"\n";
}

}
    return 0;
}