class Solution {
public:
    string defangIPaddr(string address) {
        string p;
        int n=address.length();
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                p+="[.]";
            }
            else{
                p+=address[i];
            }
        }
        return p;
        
    }
};