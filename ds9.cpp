class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {   
        int zero=0,one=0;
        for(int i=0;i<binArray.size();i++)
        {
            if(binArray[i]==0)
            zero++;
            else if(binArray[i]==1)
            one++;
        }
        int i=0,j=0;
        while(i<zero||j<one)
        {   
            if(i<zero)
            binArray[i]=0;
            if(j<one)
            binArray[zero+j]=1;
            i++,j++;
        }
        return binArray;
    }
};