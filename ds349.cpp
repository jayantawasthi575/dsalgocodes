class Solution{
public:
    int val(char c)
    {
        if (c >= '0' && c <= '9')
            return (int)c - '0';
        else
            return (int)c - 'A' + 10;
    }
    int decimalEquivalent(string N, int b){
        // code here
        int len=N.length();
        int power=1;
        int num=0;
        int i;
        for(i=len-1;i>=0;i--)
        {
            if(val(N[i])>=b)
            {
                return -1;
            }
            num=num+val(N[i])*power;
            power=power*b;
        }
        return num;
    }
};