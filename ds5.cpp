void MyQueue :: push(int x)
{
    arr[rear]=x;
    rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{ 
  if(front==rear)
  return -1;
  int t=front;
  front++;
  return arr[t];
}