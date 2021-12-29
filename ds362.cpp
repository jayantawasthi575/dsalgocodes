stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> s;
   s.push(arr[0]);
   for(int i=1;i<n;i++)
   {
       if(s.top()>arr[i])
       {
           s.push(arr[i]);
       }
       else
       {
         s.push(s.top());  
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}