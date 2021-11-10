#include <bits/stdc++.h>
using namespace std;
struct clas{
    int start;
    int end;
    int platform;
};
static bool comp(clas id1,clas id2)
{
    if(id1.end<id2.end)
    return true;
    else if(id1.end>id2.end)
    return false;
    else if(id1.platform<id2.platform)
    return true;
    return false;
}
int maxStop(int arr[][3])
{
    clas ar[5];
    for(int i=0;i<5;i++)
    {
        ar[i].start=arr[0][i];
        ar[i].end=arr[1][i];
        ar[i].platform=arr[2][i];
    }
    sort(ar,ar+5,comp);
    int maxi=ar[0].platform;
    for(int i=1;i<5;i++)
    {
        maxi=max(maxi,ar[i].end);
    }
    int slot[maxi+1];
    memset(slot,-1,maxi+1);
    int count=0;
    for(int i=0;i<=maxi;i++)
    {   
        for(int j=0;j<)
        if(slot[i]==-1)
        {
            slot[i]=
        }
    }
}
int main()
{
    int arr[5][3] = { 1000, 1030, 1,
                      1010, 1020, 1,
                      1025, 1040, 1,
                      1130, 1145, 2,
                      1130, 1140, 2 };
    cout << "Maximum Stopped Trains = "
         << maxStop(arr);
    return 0;
}