class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        vector<int> last(26);
        vector<bool> flag(26, false);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (flag[c - 'a'])
                continue;

            while (!st.empty() && c < st.top() && last[st.top()- 'a'] > i) {
                flag[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(c);
            flag[c - 'a'] = true;
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};