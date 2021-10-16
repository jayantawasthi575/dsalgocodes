class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> ma;
     Node* t=head;
     Node* prev=head;
     //ma[head->data]++;
     while(head!=NULL)
     {
         if(ma.find(head->data)!=ma.end())
         {
             prev->next=head->next;
             delete head;
             head=prev->next;
         }
         else
         {
         ma[head->data]++;
         prev=head;
         head=head->next;
         }
     }
     return t;
    }
};