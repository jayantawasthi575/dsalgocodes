class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string temp=s1+s1;
        if(temp.find(s2)!=string::npos && s1.length()==s2.length())
        return true;
        return false;
    }
};