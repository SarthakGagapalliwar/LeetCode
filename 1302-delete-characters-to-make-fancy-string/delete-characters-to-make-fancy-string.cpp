class Solution {
public:
    string makeFancyString(string s) {
        
        int cnt=1;
        string ans;
        for(int i=1; i<=s.size(); i++){
            if(s[i-1]==s[i] && cnt<2){
                ans+=s[i-1];
                cnt++;
            }else if(s[i-1]!=s[i]){
                ans+=s[i-1];
                cnt=1;
            }
        }
        return ans;
    }
};