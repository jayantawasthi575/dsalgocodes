class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node* temp=head;
       Node* prev=head;
       if(temp->data>data)
       {
        Node* n=new Node(data);
        n->next=temp;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
        head=n;
        return head;
       }
       do{
           if(temp->data>=data)
           {
               Node* n=new Node(data);
               n->next=prev->next;
               prev->next=n;
               break;
           }
           prev=temp;
           temp=temp->next;
       }while(temp!=head);
       return head;
    }
};