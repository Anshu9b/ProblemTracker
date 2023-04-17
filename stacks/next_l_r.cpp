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
    for(int i= n-1; i>=0; i--)
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
        reverse (v.begin(), v.end());

    
    for( int i=0; i<v.size();i++)
    {
        cout<<v[i];
    }
}



   /*
   
    vector<long long> v;

    stack<long long> s;

    for(int i=n-1;i>=0;i--){ 

        if(s.size() == 0){ 

            v.push_back(-1);

        } else if(s.top() > arr[i]){ 

            v.push_back(s.top());

        } else if(s.size() > 0 && s.top() <= arr[i]) {

            while(s.size() > 0 && s.top() <= arr[i]){ 

                s.pop();

            }

            if(s.size() == 0){ 

                v.push_back(-1);

            } else { 

                v.push_back(s.top());

            }

        }

        s.push(arr[i]);

    }

    reverse(v.begin(),v.end());

    return v;
    
    */