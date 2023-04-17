vector <int> preorderTraversal(TreeNode*root)
{
vector <int> preorder;
if(root==NULL)
return preorder;
stack <TreeNode*> st;
st.push(root);
while(st.empty()!=0)
{
root=st.top();
st.pop();
preorder.push_back( root->val);
if()
}




}