//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector <pair<int,int>> v;
        for(int i=0; i<n;i++)
        {
            v.push_back( {start[i], end[i]});
        }
        auto cmp= [&]( auto &a, auto &b )
        {
         return a.second<b.second;   
            
        };
        sort( v.begin(), v.end(), cmp);
        int last_end=-1, ans=0;
        for( int i=0; i<v.size();i++)
        {
            if( v[i].first> last_end){
                last_end= v[i].second;
                ans++;
            }
        }
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends