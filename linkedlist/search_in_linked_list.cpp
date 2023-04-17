//iterative soln
int search (Node *head, int x)

{
    int pos=1;
    Node *curr= head;
    while(curr!= NULL)
    {
        if(curr->data==x)
        return pos;
        else{
            pos++;
            curr= curr->next;
        }
    }
    return -1;
}
//recursive soln
int search(Node *head, int x)
{
    if(head==NULL)
    return -1;
    else
{
int res= serach(head->next , x);
if(res==-1)
return -1;
else
return (res+1);
}
}
time{ o(n)}
stack space/auxilliary space (n)
//like arrays also o(n)
//sorted linked list- skip list who only allow binary search time
//not like arrays