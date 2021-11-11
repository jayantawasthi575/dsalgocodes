#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        m--;
        n--;
        int x[m];
        int y[n];
        for(int i=0;i<m;i++)
        cin>>x[i];
        for(int j=0;j<n;j++)
        cin>>y[j];
        sort(x,x+m,greater<int>());
        sort(y,y+n,greater<int>());
        int h_c=1;
        int v_c=1;
        int ans=0;
        int i=0;
        int j=0;
        while(i<m && j<n)
        {
            if(x[i]>y[j])
            {
                ans=ans+x[i]*v_c;
                h_c++;
                i++;
            }
            else{
                ans=ans+y[j]*h_c;
                v_c++;
                j++;
            }
        }
        while(i<m)
        {
            ans=ans+x[i]*v_c;
            i++;
        }
        while(j<n)
        {
            ans=ans+y[j]*h_c;
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}