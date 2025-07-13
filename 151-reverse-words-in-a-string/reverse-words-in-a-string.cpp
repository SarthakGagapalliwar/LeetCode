class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == ' ') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }

        if (!word.empty()) {
            st.push(word);
        }

        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += " ";
        }
        return ans;
    }
};
