class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st;

        for (auto& a : dictionary) {
            st.insert(a);
        }

        string ans = "";
        string a = "";  
        int j = 0;

        while (j < sentence.size()) {
            a += sentence[j];  

            if (st.find(a) != st.end()) {  
                while (j + 1 < sentence.size() && sentence[j + 1] != ' ') {
                    j++;
                }
                ans += a;
                // ans += " ";
                a = "";  
                j++;
                continue;  
            }

            if (sentence[j] == ' ') {  
                ans += a;
                // ans += " ";
                a = ""; 
            }
            j++;
        }

        if (!a.empty()) ans += a;

    
        if (!ans.empty() && ans.back() == ' ') ans.pop_back();

        return ans;
    }
};
