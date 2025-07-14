class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp;
        unordered_set<char> used;
        if(s.size()==t.size()){
            for(int i=0;i<s.size();i++){
                if(mpp.find(s[i])!=mpp.end()){
                    if (mpp[s[i]] != t[i]) return false;
                }
                else{
                    if(used.find(t[i])!=used.end()){return false;}
                    else{mpp[s[i]]=t[i]; used.insert(t[i]);}
                    }
            }
            return true;
        }
        else{return false;}
    }
};