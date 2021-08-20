class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
       int zero=0;
       int one=0;
       int two=0;
       Node* t1=head;
       Node* t2=head;
       while(head!=NULL)
       {
           if(head->data==0)
           zero++;
           else if(head->data==1)
           one++;
           else
           two++;
           head=head->next;
       }
       while(zero!=0)
       {
           t1->data=0;
           t1=t1->next;
           zero--;
       }
       while(one!=0)
       {
           t1->data=1;
           t1=t1->next;
           one--;
       }
       while(two!=0)
       {
           t1->data=2;
           t1=t1->next;
           two--;
       }
       return t2;
    }
};