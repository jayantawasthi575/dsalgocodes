class Solution {
public:
    int maxPoints(int X[], int Y[], int N) {
       int overall_max = 0;
     unordered_map<double,int> map;
     for(int i=0;i<N;i++)
     {
     for(int j=0;j<N;j++)
     {
         //fixed point
         if(i!=j)
         {
         int x = X[i];
         int y = Y[i];
         // varying point
         int temp_x = X[j];
         int temp_y = Y[j];
         if((temp_x-x)==0)
         {
             map[INT_MAX]++;
         }
         else
         {
             double slope =  (temp_y-y)/((temp_x-x)*1.0);
             map[slope]++;
         }
         }
     }
      for(auto i:map)
      {
          if(i.second>overall_max)
          overall_max = i.second;
      }
      map.clear();
     }
     return overall_max+1;
    }
};
