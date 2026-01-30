class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        unordered_set<char>st;

        int n=s.size();
        int maxi=0;
        while(j<n){
            if(st.find(s[j]) == st.end()){
                maxi=max(maxi, j-i+1);
                st.insert(s[j]);
                j++;
            }else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};