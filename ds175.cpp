class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* newHead=NULL;
        while(head!=NULL)
        {
            struct Node* next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        return newHead;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       Node *dummy=new Node(0);
       Node *temp=dummy;
       int carry=0;
       first=reverseList(first);
       second=reverseList(second);
       while(first!=NULL || second!=NULL || carry)
       {
           int sum=0;
           if(first!=NULL)
           {
               sum=sum+first->data;
               first=first->next;
           }
           if(second!=NULL)
           {
               sum=sum+second->data;
               second=second->next;
           }
           sum=sum+carry;
           carry=sum/10;
           Node* ne=new Node(sum%10);
           temp->next=ne;
           temp=temp->next;
       }
       return reverseList(dummy->next);
    }
};