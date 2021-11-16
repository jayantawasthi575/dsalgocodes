class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       stack<char> st;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='{'||x[i]=='('||x[i]=='[')
           st.push(x[i]);
           else
           {
               if(st.empty())
               return false;
               char ch=x[i];
               char c;
               switch(ch)
               {
                   case ']':
                   c=st.top();
                   st.pop();
                   if(c=='{'||c=='(')
                   return false;
                   break;
                   case ')':
                   c=st.top();
                   st.pop();
                   if(c=='['||c=='{')
                   return false;
                   break;
                   case '}':
                   c=st.top();
                   st.pop();
                   if(c=='['||c=='(')
                   return false;
                   break;
               }
           }
       }
       if(st.empty())
       return true;
       else
       return false;
    }
};