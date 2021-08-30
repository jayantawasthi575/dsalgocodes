class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        int length=S.length()-1;
        String w="";
        int k=0;
        int i;
        for(i=length;i>=0;i--)
        {
            if(S.charAt(i)=='.')
            {
               w=w+S.substring(i+1,length+1-k);
               k=length+1-i;
               w=w+".";
            }
        }
        w=w+S.substring(i+1,length+1-k);
        return w;
    }
}