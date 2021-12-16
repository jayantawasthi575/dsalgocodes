class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        if(X[0]=='0'&&Y[0]=='0')
        {
            int i=0,j=0;
            for(;i<X.length();i++)
            {
                if(X[i]!='0')
                {
                    break;
                }
            }
            for(;j<Y.length();j++)
            {
                if(Y[j]!='0')
                {
                    break;
                }
            }
            if(i==X.length()&& j==Y.length())
            {
                string s="0";
                return s;
            }
            if(i==X.length())
            {
                X="0";
            }
            else
            {
                X=X.substr(i,X.length()-i);
            }
            if(j==Y.length())
            {
                Y="0";
            }
            else
            {
                Y=Y.substr(j,Y.length()-j);
            }
        }
        else if(X[0]=='0')
        {
            int i=0;
            for(;i<X.length();i++)
            {
                if(X[i]!='0')
                {
                    break;
                }
            }
            if(i==X.length())
            {
                X="0";
            }
            else
            {
                X=X.substr(i,X.length()-i);
            }
        }
        else if(Y[0]=='0')
        {
            int i=0;
            for(;i<Y.length();i++)
            {
                if(Y[i]!='0')
                {
                    break;
                }
            }
            if(i==Y.length())
            {
                Y="0";
            }
            else
            {
                Y=Y.substr(i,Y.length()-i);
            }
        }
        int len1=X.length();
        int len2=Y.length();
        int len3,len4;
        int i,j;
        if(len1>len2)
        {
            len3=len2;
            len4=len1;
            i=len3-1;
            j=len4-1;
        }
        else
        {
            len3=len1;
            len4=len2;
            i=len3-1;
            j=len4-1;
        }
        int carry=0;
        string s="";
        for(;i>=0;i--)
        {
            int f=0,se=0;
            if(len1>len2)
            {
            f=X[j]-'0';
            se=Y[i]-'0';
            }
            else
            {
                f=X[i]-'0';
                se=Y[j]-'0';
            }
            int l=f+se+carry;
            int mod=l%10;
            //cout<<mod<<endl;
            s=s+to_string(mod);
            carry=l/10;
            --j;
        }
        if(len1>len2)
        {
            int flength=len4-len3;
            flength=flength-1;
            while(flength>=0)
            {
                int se=X[flength]-'0'+carry;
                int mod=se%10;
                s=s+to_string(mod);
                flength=flength-1;
                carry=se/10;
            }
        }
        else
        {
            int flength=len4-len3;
            flength=flength-1;
            while(flength>=0)
            {
                int se=Y[flength]-'0'+carry;
                int mod=se%10;
                s=s+to_string(mod);
                flength=flength-1;
                carry=se/10;
            }
        }
        if(carry>0)
        {
            s=s+to_string(carry);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};