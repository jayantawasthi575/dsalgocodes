char* reverse(char *S, int len)
{
    //code here
    stack<char> ch;
    for(int i=0;i<len;i++)
    ch.push(S[i]);
    for(int i=0;i<len;i++)
    {
        S[i]=ch.top();
        ch.pop();
    }
    return S;
}