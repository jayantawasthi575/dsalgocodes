class Solution{
public:
    int counter=2;
    bool isLuck(int n)
    {
        if(counter>n)
        return 1;
        if(n%counter==0)
        return 0;
        int np=n;
        np=np-(np/counter);
        counter++;
        return isLuck(np);
    }
    bool isLucky(int n) {
        // code here
        return isLuck(n);
    }
};