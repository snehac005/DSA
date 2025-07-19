class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash1[26] = {0};
        for (char c : s) hash1[c - 'a']++;
        for (char c : t) hash1[c - 'a']--;
        for (int i = 0; i < 26; i++) {
            if (hash1[i] != 0) return i + 'a';
        }
        return ' ';
    }
};