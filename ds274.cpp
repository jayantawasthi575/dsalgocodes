#include<bits/stdc++.h>
using namespace std;
string Mirror(string S)
{
    vector<string> v;
    string t="";
    for(int i=0;i<S.size();i++)
    {
        if(S[i]==' ')
        {
            //cout<<"yes";
            v.push_back(t);
            t="";
        }
        else
        {
            t=t+S[i];
        }
    }
    //cout<<t<<endl;
v.push_back(t);
// for(auto it:v)
// cout<<it;
string s1="";
for(int i=v.size()-1;i>=0;i--)
{
    s1=s1+v[i]+" ";
}
return s1;
}
int main()
{
    string str;
    getline(cin,str);
    //cout<<str;
    cout<<Mirror(str);
    return 0;
}