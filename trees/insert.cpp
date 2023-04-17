struct Node
{
int key;
Node*left;
Node*right;
Node(int k)
{
    key=k;
    left=right=NULL;
}

};
int main()
{
    Node *root= new Node(10);
    root->left= new Node(20);
    root->right= new Node(30);
    root->left->left= new Node(40);
}















{
Node*temp= new Node(x);
Node *parent= NULL, *curr=root;
while( curr!=NULL)
{
    parent= curr;
    if(curr->key > x)
    {
        curr= curr->left;
    
    }
    else if(curr->key < x)
    curr=curr->right;
    elser
    return root;

}

