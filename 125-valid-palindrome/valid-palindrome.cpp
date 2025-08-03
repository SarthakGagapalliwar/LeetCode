class Solution {
public:
    bool isPalindrome(string s) {
        string pali = "";

        // Keep only alphanumeric and convert to lowercase
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                pali += tolower(s[i]);
            }
        }

        int i = 0;
        int j = pali.size() - 1;
        while (i < j) {
            if (pali[i] != pali[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
