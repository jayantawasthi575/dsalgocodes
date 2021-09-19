int remAnagram(string str1, string str2)
{
   int count1[26]={0},count2[26]={0};
   for(int i=0;i<str1.length();i++)
   {
       count1[str1[i]-'a']++;
   }
   for(int i=0;i<str2.length();i++)
   {
       count2[str2[i]-'a']++;
   }
   int result=0;
   for(int i=0;i<26;i++)
   {
       result=result+abs(count1[i]-count2[i]);
   }
   return result;
}