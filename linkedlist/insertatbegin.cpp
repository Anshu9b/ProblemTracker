// structure 
/*struct Node {
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next= NULL;
    }
};
*/ 
//given node
 Node *insert_at_begin(Node *head, int val )
 {
  Node *temp = new Node(val);
  temp -> next= head;
  return temp;
 }

int main()
{

    Node *head= NULL;
    head= insertBegin( head,30);
    head= insertBegin(head,60);
    head=insertBegin( head,90);
}

 Node *insert_at_end(Node *head,int x)
 {
    Node *temp= new Node(val);
    if(head==NULL)
      return temp;
      Node* curr= head;

    while(curr->next!= NULL)
    {
        curr= curr->next;
        curr->next= temp;
    }
    return head;

 }
 Node *delete_at_first( Node, int val)
 {
    if(head==NULL) //SEgmentation fault na ajyee
     return head;
     else
     {
        Node *temp = head->next;
        delete head;
        return temp;
     }
 }

 /*
 Node *insert_at_given_position( Node *head, int val,int pos)
 {
    Node *temp= new Node (val);
    Node * curr= head;
    while( curr-> next!= Null)
    {
        curr= curr-> next;
        curr-> next=temp;
        if(head-> next== pos)
        temp->next= head;
      return temp;
    }

 }
 */
Node *delete_at_end( )