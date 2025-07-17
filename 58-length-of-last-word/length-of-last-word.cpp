class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(count > 0) break; 
                continue;
            } else {
                count++;
            }
        }
        return count;
    }
};
