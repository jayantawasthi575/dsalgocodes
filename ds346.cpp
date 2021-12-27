class Solution
{
  public:
    int extractMaximum(string S) 
    { 
        int num=0,res=0,flag=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                flag=1;
                num=num*10+(S[i]-'0');
            }
            else
            {
                res=max(res,num);
                num=0;
            }
        }
        if(num>res)
        res=num;
        if(flag==1)
        return res;
        else
        return -1;
    } 
};