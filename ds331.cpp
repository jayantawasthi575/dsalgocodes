class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        stack<char> st;
        string ans="";
        int i=0;
        int len=0;
        bool t=false;
        while(true)
        {
        t=false;
        i=0;
        len=0;
        //cout<<"first"<<" "<<s<<endl;
        while(i<s.length())
        {
            if(i!=0&&st.top()==s[i])
            {
                len++;
                st.push(s[i]);
                if(len==k)
                {
                    while(len!=0)
                    {
                        t=true;
                        st.pop();
                        len--;
                    }
                    len=0;
                    ++i;
                    st.push(s[i]);
                    len++;
                    i++;
                }
            }
            else if(i!=0&&st.top()!=s[i])
            {
                len=0;
                st.push(s[i]);
                len++;
                i++;
            }
            if(i==0)
            {
              st.push(s[i]);
              len++;
              i++;
            }
        }
        if(t==false)
        break;
        else
        {
        s="";
        while(!st.empty())
        {
            s=s+st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        }
        }
        //reverse(s.begin(),s.end());
        return s;
    }
};