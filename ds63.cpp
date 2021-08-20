class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int> ma;
        int cnt=0;
        while(head1!=NULL)
        {
            ma.insert(head1->data);
            head1=head1->next;
        }
        while(head2!=NULL)
        {
            if(ma.find(x-head2->data)!=ma.end())
            {
                cnt++;
            }
            head2=head2->next;
        }
        return cnt;
    }
};