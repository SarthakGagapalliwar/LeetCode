class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto a : nums) {
            mp[a]++;
        }

        for (auto &[key, val] : mp) {
            if (val > 1) {
                return true;  
            }
        }

        return false; 
    }
};
