class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto a : nums){
            freq[a]++;
        }
        int len=0;
        for(auto &[key, val] : freq){
            if(freq.count(key+1)){
                len=max(len,val+freq[key+1]);
            }
        }
        return len;
    }
};