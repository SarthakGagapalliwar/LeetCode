class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>mp;
        int i=0;
        int j=0;
        int n=s.size();
        int maxi=0;

        while(j<n){
            if(mp.find(s[j])==mp.end()){
                mp.insert(s[j]);
                maxi=max(maxi,j-i+1);
                j++;
            }else{
                mp.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};