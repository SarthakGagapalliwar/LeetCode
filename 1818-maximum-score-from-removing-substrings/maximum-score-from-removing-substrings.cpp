class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int count = 0;
        if (x < y) {
            stack<char> st;
            string rem = "";
            for (int i = 0; i < s.size(); i++) {
                if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                    count += y;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
            // collect remaining chars in correct order
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            // process remaining string
            for (char c : rem) {
                if (!st.empty() && st.top() == 'a' && c == 'b') {
                    count += x;
                    st.pop();
                } else {
                    st.push(c);
                }
            }

        } else {
            stack<char> st;
            string rem = "";
            for (int i = 0; i < s.size(); i++) {
                if (!st.empty() && st.top() == 'a' && s[i] == 'b') {
                    count += x;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
            // collect remaining chars in correct order
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            // process remaining string
            for (char c : rem) {
                if (!st.empty() && st.top() == 'b' && c == 'a') {
                    count += y;
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }

        return count;
    }
};
