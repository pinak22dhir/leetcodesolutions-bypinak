class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.length();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
         int x;
         for(int i=0;i<26;i++){
              if(freq[i]!=0){
                  x=freq[i];
                  break;
              }
         }
        for(int i=0;i<freq.size();i++){
           
           if(freq[i] != x && freq[i] != 0){
            return false; 
           }
        }
        return true;
    }
};