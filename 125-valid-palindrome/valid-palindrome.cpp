class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }

        int i=0;
        int j=ans.size()-1;

        while(i<j){
            if(ans[i] != ans[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};