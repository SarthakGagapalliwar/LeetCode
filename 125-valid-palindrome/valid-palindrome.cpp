class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int e = s.size() - 1;
        while (i < e) {

            while (i < e && !isalnum(s[i])) i++;
            while (i < e && !isalnum(s[e])) e--;

            if (tolower(s[i]) != tolower(s[e])) {
                return false;
            }

            i++;
            e--;
        }
        return true;
    }
};
