#include <bits/stdc++.h>
using namespace  std;
int main()
{
    vector <int> v;
    stack <int> st;
    int n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int s=st.size();
    for(int i= 0; i<s ; i++)
    {
        if( st.size()==0)
        {
            v.push_back(-1);
        }
        else if( st.size()>0 && st.top() > arr[i])
        {
            v.push_back( st.top());
        }
        else if( st.size() >0 && st.top()<= arr[i])
        {
            while( st.size() >0 && st.top() <= arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push( arr[i]);
        

    }
}