void check(vector<int>& tp)
{
    sort(tp.begin(),tp.end());
}
void SortedStack :: sort()
{
   //Your code here
   vector<int> tp;
   while(!s.empty())
   {
       tp.push_back(s.top());
       s.pop();
   }
   check(tp);
   for(int i=0;i<tp.size();i++)
   {
       s.push(tp[i]);
   }
}