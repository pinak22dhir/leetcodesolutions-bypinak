class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> freq(26,0);
         vector <int> freq2(26,0);
          if(t.size()!=s.size()){
             return false;
         }
         for(int i=0;i<s.size();i++){
             freq[s[i]-'a']++;
         }
          for(int i=0;i<t.size();i++){
             freq2[t[i]-'a']++;
         }
          for(int i=0;i<26;i++){
            if(freq[i]!=freq2[i]){
                return false;
            }
         }
        
      
        
        return true;
    }
};