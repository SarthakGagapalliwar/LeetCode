class Solution {
public:
    string smallestSubsequence(string s) {
        stack<int>st;
        vector<int>last(26);
        vector<bool>visited(26,false);

        for(int i=0; i<s.size(); i++){
            last[s[i]-'a']=i;
        }

        for(int i=0; i<s.size(); i++){
            char c=s[i];
            if(visited[c-'a'])continue;

            while(!st.empty() && c<st.top() && last[st.top()-'a']>i){
                visited[st.top()-'a']=false;
                st.pop();
            }
            st.push(c);
            visited[c-'a']=true;
        }

        string ans="";

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans; 

    }
};