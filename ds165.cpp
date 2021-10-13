class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        string m="";
        int i=0;
        while(i<str.size())
        {
            if(str[i]=='a')
            {
                if(i<str.size()&&str[i+1]=='c')
                {
                    i++;
                    i++;
                }
                else
                {
                    m=m+str[i];
                    i++;
                }
            }
            else if(str[i]=='b')
            {
                i++;
            }
            else
            {
             m=m+str[i];   
             i++;
            }
        }
        return m;
    } 
};