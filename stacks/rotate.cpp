#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n][n];
 vector <int ,int> res;
 for(int i=0; i<n;i++)
 {
    for(int j=0; j<n;j++)
    {
        cin>> arr[i][j];
    }
 }
for( int i=0; i<n;i++)
{
    for(int j=0; j<n;j++)
    {
          arr[i][j]==arr[i-1][j];

    }
}



}