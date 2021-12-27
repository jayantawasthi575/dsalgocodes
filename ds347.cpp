class Solution{   
public:
    int checkPower(int N){
        // code here 
        if(N==1)
        return true;
        for(int i=2;i<=sqrt(N);i++)
        {
            unsigned y=2;
            unsigned p=pow(i,y);
            while(p<=N && p>0)
            {
                if(p==N)
                return true;
                y++;
                p=pow(i,y);
            }
        }
        return false;
    }
};