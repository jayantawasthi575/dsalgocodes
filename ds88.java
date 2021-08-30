{    
    //Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a,String b)
    {
    char[] a1 = a.toCharArray();
    char[] b1 = b.toCharArray();
    Arrays.sort(a1);
    Arrays.sort(b1);
    a=new String(a1);
    b=new String(b1);
    if(a.length()==b.length())
    {
        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)!=b.charAt(i))
                return false;
        }
        return true;
    }
    return false;
    }
}