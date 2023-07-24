class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int jlast=0, flag;  // jlast is to store the last index at which j points
        for(int i = 0; i < g.size(); i++) {
            for(int j = jlast, flag=0; j < s.size(); j++) {
                if (s[j] >= g[i]) {
                    count++;
                    // increment jlast
                    jlast=j+1;
                    flag = 1;
                    break;
                }
            }
            // flag 0 means there is no children whom cookies can be provided on given condition 
            if(flag == 0) { 
                break;
            }
    }


        return count;
        
    }
};