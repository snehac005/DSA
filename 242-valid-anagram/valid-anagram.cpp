class Solution {
public:
    bool isAnagram(string s, string t) {
        int mpp[26];
        int mpp1[26];
        if(s.size()==t.size()){
            for(int i=0;i<s.size();i++){
                mpp[s[i]-'a']+=1;
                mpp1[t[i]-'a']+=1;
            }
            for(int i=0;i<26;i++){
                if(mpp[i]!=mpp1[i]){return false;}
            }
            return true;
        }
        else{return false;}
    }
};