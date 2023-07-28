class Solution {
public:
     int iterate(vector<int> &arr, int i, int j, vector<vector<int>> &mp){
// If the index from the right and left side becomes equal then all the value have been considered
        if(i == j) return arr[i];
//If value already found return the value
        if(mp[i][j] != INT_MIN) return mp[i][j];
//Iterate by taking either the i th or j th index value and add the value respectively and subtract the next move of other player
        return mp[i][j] = max(arr[i] - iterate(arr, i + 1, j, mp), arr[j] - iterate(arr, i, j - 1, mp));
    }
    bool PredictTheWinner(vector<int>& nums){
        vector<vector<int>> mp(nums.size(), vector<int> (nums.size(), INT_MIN));
        // DP for memoization
        int score = iterate(nums, 0, nums.size() - 1, mp);
//if negitive socre then player 2 wins
        if(score < 0) return false;
        return true;
    }
};