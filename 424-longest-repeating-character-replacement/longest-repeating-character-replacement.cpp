class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxFreq=0;
        int longlen=0;
        unordered_map<char,int>mp;

        while(j<s.size()){
            mp[s[j]]++;
            maxFreq=max(maxFreq,mp[s[j]]);

            if((j-i+1)-maxFreq>k){
                mp[s[i]]--;
                i++;
            }
            
            longlen=max(longlen,j-i+1);
            j++;
        }
        return longlen;
    }
};