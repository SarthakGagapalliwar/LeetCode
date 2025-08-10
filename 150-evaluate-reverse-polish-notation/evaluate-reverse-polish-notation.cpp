class Solution {
public:
    int math(int a, int b, char s) {
        if (s == '/') {
            return b / a;
        }
        else if (s == '*') {
            return a * b;
        }
        else if (s == '+') {
            return a + b;
        } else {
            return b - a; 
        }
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            char ch = tokens[i][0]; 
            if (isdigit(ch) || (tokens[i].size() > 1 && ch == '-')) {
                int num = stoi(tokens[i]);
                st.push(num);
            } else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int num2 = math(a, b, ch);
                st.push(num2);
            }
        }
        return st.top();
    }
};
