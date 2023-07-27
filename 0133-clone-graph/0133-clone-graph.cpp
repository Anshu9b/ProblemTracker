/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* solve(Node* node){
        if(node==NULL){
            return NULL;
        }
        queue<Node*> q;
        map<int,Node*> m;
        Node* root=new Node(node->val);
        q.push(node);
        m[root->val]=root;
        while(!q.empty()){
            Node* top=q.front();
            q.pop();
            for(auto it:top->neighbors){
                if(m.find(it->val)==m.end()){
                    Node* temp=new Node(it->val);
                    m[top->val]->neighbors.push_back(temp);
                    m[temp->val]=temp;
                    q.push(it);
                }
                else{
                    m[top->val]->neighbors.push_back(m[it->val]);
                }
            }
        }
        return root;
    }
    Node* cloneGraph(Node* node) {
        return solve(node);
    }
};
