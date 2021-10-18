long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long m=1000000007;
  long long num1=0;
  long long num2=0;
  Node* first=l1;
  Node*second=l2;
  while(first!=NULL)
  {
      num1=(num1*10+first->data)%m;
      first=first->next;
  }
  while(second!=NULL)
  {
      num2=(num2*10+second->data)%m;
      second=second->next;
  }
  return (num1*num2)%m;
}