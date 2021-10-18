class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverseList(Node* head)
    {
        Node* pre=NULL;
        Node* next=NULL;
        while(head!=NULL)
        {
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
    bool isPalindrome(Node *head)
    {
       if(head==NULL || head->next==NULL)
            return true;
       Node* slow=head;
       Node* fast=head;
       while(fast->next!=NULL && fast->next->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
       }
       slow->next=reverseList(slow->next);
       slow=slow->next;
       while(slow!=NULL)
       {
           if(head->data!=slow->data)
               return false;
           head=head->next;
           slow=slow->next;
       }
       return true;
    }
};