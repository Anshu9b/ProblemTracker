
// iterative approach vector of int array
// not efficient sol  requires 2 traversals
//here we change the data and links
//what if we change links?
Node *reslist (Node *head)
{
    vector <int> arr;
    for (Node *curr= head; curr!=NULL; curr= curr->next)
    {
        arr.push_back( curr->data);
    }
        for(Node* curr= hrad, curr!= NULL; curr=curr->next)
        {
            curr->data= arr.back();
            arr.pop_back();
        }
       
        return head;   
}
// stack space : o(n)
//time : o(n)
// here thr function calls 10 20 30 
// 
// recursive approach 
Node *reslist (Node *head)
{
Node *curr= head;
Node *prev= NULL;
while(curr!= NULL)
{
    Node*next= curr->next;
    curr->next= prev;
    prev= curr;
    curr= next;

}
return prev;//prev is new head 
}