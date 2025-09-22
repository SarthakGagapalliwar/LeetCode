class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto a : nums) {
            mp[a]++;
        }

        unordered_map<int,int> mp1;
        for (auto &[key,val] : mp) {
            mp1[val]++; 
        }

        int maxi = 0;
        int maxVal = 0;
        for (auto &[key,val] : mp1) {
            if (key > maxVal) {      
                maxVal = key;
                maxi = key * val;   
            }
        }
        return maxi;
    }
};
