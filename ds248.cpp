#include<bits/stdc++.h>
using namespace std;
int tt[1002][1002];
int survival(int h,int a,int flag)
{
    if(h<=0 || a<=0)
    return -1;
    if(tt[h][a]!=-1)
    return tt[h][a];
    if(flag==0)
    {
        return tt[h][a]=1+max(survival(h-5,a-10,1),survival(h-20,a+5,2));
    }
    else if(flag==1)
    {
        return tt[h][a]=1+max(survival(h+3,a+2,0),survival(h-20,a+5,2));
    }
    else if(flag==2)
    {
        return tt[h][a]=1+max(survival(h+3,a+2,0),survival(h-5,a-10,1));
    }
}
int main()
{
    memset(tt,-1,sizeof(tt));
    int t;
    cin>>t;
    while(t--)
    {
        int h,a;
        cin>>h>>a;
        int flag=max(survival(h,a,0),max(survival(h,a,1),survival(h,a,2)));
        cout<<flag<<endl;
    }
    return 0;
}