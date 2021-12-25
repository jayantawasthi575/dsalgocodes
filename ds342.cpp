class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long int temp=A;
        int cnt=B;
        while(cnt>1)
        {
            temp=temp*A;
            //cout<<temp<<endl;
            cnt--;
        }
        int i=1;
        while(temp>0)
        {
            if(K==i)
            {
                return (temp%10);
            }
            i++;
            temp=temp/10;
        }
        //cout<<temp<<endl;
    }
};