class Solution {
public:
    string truncateSentence(string s, int k) {
        string p;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] ==' ') {
                count++;
            }
            while (count < k) {
                p += s[i];
                break;
                 
            }
        }
        return p;
    }
};
