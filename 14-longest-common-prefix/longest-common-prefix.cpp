class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int count = ans.size(); 

        for (int i = 1; i < strs.size(); i++) {
            string s = strs[i];
            int target = 0;

            for (int j = 0; j < count && j < s.size(); j++) {
                if (ans[j] == s[j]) {
                    target++;
                } else {
                    break;
                }
            }

            count = target;  
        }

        return ans.substr(0, count); 
    }
};
