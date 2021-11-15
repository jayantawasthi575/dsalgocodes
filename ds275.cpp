#include<bits/stdc++.h>
using namespace std;
string loveSeventeen(string S)
{
    unordered_map<int,int>mp;
    for(int i=0;i<S.length();i++)
    {
        mp[S[i]-'0']++;
    }
    for(auto it:mp)
    {
        //cout<<17-it.first<<endl;
        if(mp[17-it.first]>0)
        {
            //cout<<"here";
            int kp=it.second;
            int kpp=mp[17-it.first];
            cout<<kp<<" "<<kpp<<endl;
            if(kp>kpp)
            {
                it.second=it.second-kpp;
                mp[17-it.first]=mp[17-it.first]-kpp;
                //cout<<it.second<<" "<<mp[17-it.first]<<endl;
            }
            else
            {
               it.second=it.second-kp;
                mp[17-it.first]=mp[17-it.first]-kp; 
            }
        }
    }
    int m=0;
    for(auto it:mp)
    {
        //cout<<it.first<<" "<<it.second<<endl;
        m=m+it.second;
    }
    cout<<m<<endl;
    return "hell";
}
int main()
{
    string str;
    cin>>str;
    loveSeventeen(str);
    //cout<<str;
    //cout<<(str);
    return 0;
}