#include <bits/stdc++.h>
using namespace std;
 
const int no_of_chars = 256;
char* findSubString(string str,string pat)
{
    int len1=str.length();
    int len2=pat.length();
    // if(len1<len2)
    // {
    //     cout<<"No such window exits";
    //     return '';
    // }
    int hash_pat[no_of_chars]={ 0 };
    int hash_str[no_of_chars]={ 0 };
    for(int i=0;i<len2;i++)
    {
        hash_pat[pat[i]]++;
    }
    int start=0,start_index=-1,min_len=INT_MAX,count=0;
    for(int i=0;i<len1;i++)
    {
        hash_str[str[i]]++;
        if(hash_str[str[i]]<=hash_pat[str[i]])
        {
            count++;
        }
        if(count==len2)
        {
            while(hash_str[str[start]]>hash_pat[str[start]]||hash_pat[str[start]]==0)
            {
                if(hash_str[str[start]]>hash_pat[str[start]])
                hash_str[str[start]]--;
                start++;
            }
            int len_window=i-start+1;
            if(min_len>len_window)
            {
                min_len=len_window;
                start_index=start;
            }
        }
    }
    
    char* ch=new char[min_len];
    int j=0;
    for(int i=start_index;i<start_index+min_len;i++)
    {
        ch[j]=str[i];
        j++;
        //cout<<str[i]<<" ";
    }
    for(int j=0;j<min_len;j++)
    {
        cout<<ch[j]<<" ";
    }
    return ch;
}
int main()
{
    string str = "this is a test string";
    string pat = "tist";
 
    cout << "Smallest window is : \n"
         << findSubString(str, pat);
    return 0;
}