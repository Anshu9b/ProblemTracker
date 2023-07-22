/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // yha preoder wise traverse krnge
    // each node ka curr value hogi = (totalsum- currva * currval
    //preorder mai store krnge last value 
    
    long maxi = INT_MIN;
    int total_sum = 0;
    int mod = pow(10,9)+7;

    int sum(TreeNode* root){
        if(root == NULL) return 0;
        return root->val += sum(root->left) + sum(root->right);
    }
   
    void solve(TreeNode* root){
        if(root == NULL) return;
       
        if(root->left)
         maxi = max(maxi,((long) (total_sum- (total_sum - root->left->val)) * ( total_sum - root->left->val)));
        
        if(root->right)
         maxi = max(maxi,((long) (total_sum-(total_sum - root->right->val)) * ( total_sum - root->right->val)));

        solve(root->left);
        solve(root->right);
    }
    int maxProduct(TreeNode* root) {
        total_sum = sum(root);;
        solve(root);
        return maxi%mod;
    }

    
};