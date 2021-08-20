class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {  
        if(head->next==NULL)
        return head;
       Node* carry=head->next;
       int t=0;
       Node* prev=head;
       while(head!=NULL && head->next!=NULL )
       {
           Node* one=head->next;
           head->next=head->next->next;
           one->next=head;
           if(t==0)
           prev=head;
           else
           {
            prev->next=one;
            prev=head;
           }
           head=head->next;
           t=1;   
       }
       //cout<<head->next->data<<endl;
       return carry;
    }
};