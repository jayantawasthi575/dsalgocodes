class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0;
       int reqfuel=0;
       int exfuel=0;
       for(int i=0;i<n;i++)
       {
           exfuel=exfuel+p[i].petrol-p[i].distance;
           if(exfuel<0)
           {
               start=i+1;
               reqfuel=reqfuel+exfuel;
               exfuel=0;
           }
       }
       if(reqfuel+exfuel>=0)
       return start;
       return -1;
    }
};