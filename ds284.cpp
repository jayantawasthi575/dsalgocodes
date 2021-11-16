class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> s1;
        int temp=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='*'||S[i]=='+'||S[i]=='-'||S[i]=='/')
            {
                int v1=s1.top();
                s1.pop();
                int v2=s1.top();
                s1.pop();
                switch(S[i])
                {
                    case '*':
                    temp=temp+v1*v2;
                    s1.push(v1*v2);
                    break;
                    case '+':
                    temp=temp+v1+v2;
                    s1.push(v1+v2);
                    break;
                    case '-':
                    temp=temp+v2-v1;
                    s1.push(v2-v1);
                    break;
                    case '/':
                    temp=temp+v2/v1;
                    s1.push(v2/v1);
                    break;
                }
            }
            else
            {
                s1.push(S[i]-'0');
            }
        }
        return s1.top();
    }
};