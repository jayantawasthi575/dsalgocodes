class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
      int i=0;
      Node* prev=head;
      while(head!=NULL && i<=M)
      {   
          prev=head;
          head=head->next;
          i++;
          if(i==M)
          {
              int j=0;
              while(head!=NULL && j<N)
              {
                  prev->next=head->next;
                  delete head;
                  head=prev->next;
                  j++;
              }
              i=0;
          }
      }
      i=0;
    }
};