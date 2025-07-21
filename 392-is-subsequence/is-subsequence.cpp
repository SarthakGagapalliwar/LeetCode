class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="" && t==""){
            return true;
        }
        unordered_map<char, int> mp;
        for (auto a : s) {
            mp[a]++;
        }
        string ans = "";
        int idx = 0;  
        for (auto a : t) {
            char ch = a;
            if (idx < s.size() && ch == s[idx]) {
                ans += ch;
                idx++;
            }
            if (ans.size() == s.size()) {
                if (s == ans) {
                    return true;
                }
            }
        }
        return false;
    }
};
