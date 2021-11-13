#include <bits/stdc++.h>
using namespace std;

string printSequence(string str[],string input)
{
    string output="";
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==' ')
        output=output+"0";
        else
        {
            int position=input[i]-'A';
            output=output+str[position];
        }
    }
    return output;
}
int main()
{
    // storing the sequence in array
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
 
    string input = "GEEKSFORGEEKS";
    cout << printSequence(str, input);
    return 0;
}