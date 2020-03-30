class Solution {
public:
    bool isSubsequence(string s, string t) {
        for(int i = 0; i < s.size(); i++) {
            if(t.find(s[i]) == t.npos) return false;
            if(t.find(s[i]) != t.npos) t = t.substr(t.find(s[i])+1);
        }
        
        return true;
    }
};
