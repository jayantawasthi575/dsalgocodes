class Solution{
public:	
	int minValue(string S, int K)
	{
	   int arr[26]={0};
	   if(K>S.length())
	   {
	       return 0;
	   }
	   for(int i=0;i<S.length();i++)
	   {
	       arr[S[i]-'a']++;
	   }
	   while(K>0)
	   {
	       int max=arr[0];
	       int index=0;
	       for(int i=1;i<26;i++)
	       {
	           if(arr[i]>max)
	           {
	               max=arr[i];
	               index=i;
	           }
	       }
	       arr[index]--;
	       K--;
	   }
	   int sum=0;
	   for(int i=0;i<26;i++)
	   {
	       arr[i]=arr[i]*arr[i];
	       sum=sum+arr[i];
	   }
	   return sum;
	}
};