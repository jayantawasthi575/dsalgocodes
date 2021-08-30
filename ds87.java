class GfG
 {
	String encode(String str)
	{
        char ch=str.charAt(0);
        String w="";
        int k=1,i=1;
        for(;i<str.length();i++)
        {
            if(str.charAt(i)==ch)
            {k++;
            continue;
            }
            w=w+ch+String.valueOf(k);
            ch=str.charAt(i);
            k=1;
        }
         w=w+ch+String.valueOf(k);
        return w;
	}
	
 }