class Solution
{
    public:
    //Function to reverse a linked list.
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
    
};