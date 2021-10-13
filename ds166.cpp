string maximumFrequency(string s){
        // Complete the function
      stringstream str(s);
      map<string,int> mp;
      string word;
      int maximum=0;
      while(str>>word)
      {
          mp[word]++;
          maximum=max(maximum,mp[word]);
      }
      stringstream str1(s);
      while(str1>>word)
      {
          if(mp[word]==maximum)
          {
              return word+" "+to_string(maximum);
          }
      }
}