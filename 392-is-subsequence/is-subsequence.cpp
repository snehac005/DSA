class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(char sub:t){
            if(j<s.size() && s[j]==sub){
                j++;
            }
        }
        if(j==s.size()){
            return true;
        }
        return false;
    }
};