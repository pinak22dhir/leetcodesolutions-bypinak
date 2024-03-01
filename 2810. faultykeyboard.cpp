class Solution {
public:
    std::string finalString(std::string s) {
        int n = s.length();
        std::string p;

        for (int i = 0; i < n; i++) {
            if (s[i] != 'i') {
                p += s[i];
            }
        
            if (s[i] == 'i') {
                reverse(p.begin(), p.end());
                
            }
        }
    for(int i=0;i<p.size();i++){
        cout<<p[i];
    }
       
        return p;
    }
};