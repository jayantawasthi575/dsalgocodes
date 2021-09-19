class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
       long m = 0; 
       for (int i=0; a[i] !='\0'; i++)
       {
            if (a[i] == '1')
               m++;
       }
       return m*(m-1)/2;
    }

};