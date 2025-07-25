class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;

        string word = "";

        // Traverse and extract words
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                st.push(word);
                word = "";
            }
        }
        if (!word.empty()) {
            st.push(word);
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty())
                result += " ";
        }

        return result;
    }
};