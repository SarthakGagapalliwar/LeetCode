class Solution {
public:
    string smallestNumber(string pattern) {
        pattern += 'I';  // Sentinel
        string ans = "";
        string temp = "";
        
        // Notice loop goes to <= pattern.size() now
        for (int i = 1; i <= pattern.size(); i++) {
            temp += to_string(i);
            if (pattern[i - 1] == 'I') {  // check previous char
                reverse(temp.begin(), temp.end());
                ans += temp;
                temp = "";
            }
        }
        return ans;
    }
};
