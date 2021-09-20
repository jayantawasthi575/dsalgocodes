string printNumber(string s, int n) 
{
    string arr[]={
        "2","2","2","3","3","3","4","4","4","5","5","5","6","6","6","7","7","7","7","8","8","8","9","9","9","9"
    };
    string sp;
    for(int i=0;i<n;i++)
    {
        sp=sp+arr[s[i]-'a'];
    }
    return sp;
}