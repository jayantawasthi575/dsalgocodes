class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> ans;
    void findCombinations(unordered_map<int,vector<char>> mp,int a[],string res,int index,int n)
    {
        if(index==n)
        {
            ans.push_back(res);
            return;
        }
        int digit=a[index];
        int len=mp[digit].size();
        for(int i=0;i<len;i++)
        {
            findCombinations(mp, a, res + mp[digit][i], index + 1, n);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int,vector<char>> mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]={'g','h','i'};
        mp[5]={'j','k','l'};
        mp[6]={'m','n','o'};
        mp[7]={'p','q','r','s'};
        mp[8]={'t','u','v'};
        mp[9]={'w','x','y','z'};
        findCombinations(mp,a, string(""), 0, N );
        return ans;
    }
};
