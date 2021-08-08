class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
      int i=0,j=0;
      int sum1=0,sum2=0,result=0;
      while(i<l1 && j<l2)
      {
          if(A[i]<B[j])
          {   
              //cout<<A[i]<<endl;
              sum1=sum1+A[i];
              i++;
          }
          else if(A[i]>B[j])
          { 
              //cout<<B[j]<<endl;
              sum2=sum2+B[j];
              j++;
          }
          else
          {   
              //cout<<A[i]<<endl;
              result=result+max(sum1,sum2);
              sum1=0,sum2=0;
              result=result+A[i];
              i++;
              j++;
          }
      }
      while(i<l1)
      {
          sum1=sum1+A[i];
          i++;
      }
      while(j<l2)
      {
          sum2=sum2+B[j];
          j++;
      }
      result=result+max(sum1,sum2);
      return result;
    }
};