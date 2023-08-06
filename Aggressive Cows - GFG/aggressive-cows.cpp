//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &a) {
       // int count=0;
       sort(a.begin(), a.end());
      long long low=1, high=1e18;
      long long mid=0; ;
      long long ans=0;
      while(low<=high)
        { 
            mid= (low + high)>>1;
            int count=1;
            int last= a[0];
            for(int i=1; i< a.size() && count<k;i++)
            {
            if(a[i]- last >= mid)
            {
                
            last= a[i];
            count++;
            }
            }
        
            if( count<k)
             high= mid-1;
            else
            {
            low= mid+1;
            ans= mid;
            }
        }
       return ans;    
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends