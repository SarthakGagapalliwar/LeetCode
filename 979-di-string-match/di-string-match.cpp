class Solution {
public:
    vector<int> diStringMatch(string s) {
        int d=s.size();
        int l=0;
        vector<int>ans;
        for(int i=0; i<=s.size(); i++){
            if(s[i]=='I'){
                ans.push_back(l);
                l++;
            }else if(s[i]=='D'){
                ans.push_back(d);
                d--;
            }else{
                ans.push_back(l);
            }
        }
        return ans;
    }
};