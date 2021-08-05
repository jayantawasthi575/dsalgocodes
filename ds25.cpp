int maxLen(int A[], int n)
{ 
  int sum=0;
  unordered_map<int,int> mp;
  int i=-1;
  mp[0]=-1;
  int maxx=0;
  for(i=0;i<n;i++)
  {
      sum=sum+A[i];
      if(mp.find(sum)!=mp.end())
      {
          maxx=max(maxx,i-mp[sum]);
      }
      else
      {
          mp[sum]=i;
      }
  }
  return maxx;
}
