class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deletem(stack<int>&s, int del,int temp)
    {
        int top=s.top();
        //cout<<top<<endl;
        s.pop();
        if(del==temp+1)
        return;
        else
        deletem(s,del,temp+1);
        //cout<<top<<endl;
        s.push(top);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int del=0;
        del=sizeOfStack/2+1;
        deletem(s,del,0);
        //rev(s);
        //reverse(s.begin(),s.end());
    }
};