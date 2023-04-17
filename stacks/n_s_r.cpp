class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Brute Force 
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int max=-1;
            for(int j=0;j<nums2.size();j++){
                int index=j;
                if(nums1[i]==nums2[j]){
                     while(index!=nums2.size()){
                        if(nums2[index]>nums1[i]){
                            max=nums2[index];
                            break;
                        }
                        index++;
                    }
               }
            }
            ans.push_back(max);
        }
        return ans;

        // //Using stack

        unordered_map<int, int> map; // map for next greater element
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && st.top() < num){
                map[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }   
        for (int i = 0; i < nums1.size(); i++){
            nums1[i] = map.count(nums1[i]) ? map[nums1[i]] : -1;
        }
        return nums1;
    }
};