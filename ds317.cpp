class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int sum=0;
        int i=0;
        if(str[0]=='-')
        i=1;
        for(;i<str.length();i++)
        {
            //cout<<str[i]<<endl;
            if(str[i]-'0'>9)
            return -1;
            else
            {
                sum=(str[i]-'0')+10*sum;
            }
        }
        if(str[0]=='-')
        sum=sum*-1;
        return sum;
    }
};