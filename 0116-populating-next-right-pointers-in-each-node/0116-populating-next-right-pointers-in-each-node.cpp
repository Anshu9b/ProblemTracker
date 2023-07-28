/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size()-1;
            Node* prev=q.front();
            if(prev->left)q.push(prev->left);
            if(prev->right)q.push(prev->right);
            q.pop();
            for(int i=0;i<s;i++)
            {
               Node* temp = q.front();
               prev->next = temp;
               prev=temp;
               q.pop();

               if(prev->left)q.push(prev->left);
               if(prev->right)q.push(prev->right);
            }
            prev->next = nullptr;
        }

        return root;
    }
};