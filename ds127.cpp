int maxlength( string s)
{
 int k=0;
 int l=0;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]=='1')
     {
         k++;
     }else
     {
         if(k>l)
         {
             l=k;
         }
         k=0;
     }
 }
 if(k>l)
 l=k;
 return l;
}