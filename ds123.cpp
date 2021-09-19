class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string s1="";
        string s2="";
        s1=s1+str1.substr(str1.length()-2,2)+str1.substr(0,str1.length()-2);
        s2=s2+str1.substr(2)+str1.substr(0,2);
        return (str2.compare(s1)==0||str2.compare(s2)==0);
    }
};