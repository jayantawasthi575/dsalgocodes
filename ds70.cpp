class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {   int i=1;
        if(i==x)
        {
            head_ref=head_ref->next;
            head_ref->prev=NULL;
            return head_ref;
        }
        Node* node=head_ref;
        while(node->next!=NULL)
        {
            if(i==x)
            {
                node->prev->next=node->next;
                node->next->prev=node->prev;
                delete node;
                return head_ref;
            }
            node=node->next;
            i++;
        }
        if(i==x)
        {
        node->prev->next=NULL;
        delete node;
        }
        return head_ref;
    }
};