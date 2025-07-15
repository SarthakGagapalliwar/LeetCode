class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0;
        int sum = 0;

        for (auto num : nums) {
            sum += num;
            int mod = sum % k;
            if (mod < 0) {
                mod = (mod + k) % k;  
            }

            if (mp.find(mod) != mp.end()) {
                count += mp[mod];    
            }
            mp[mod]++;               
        }

        return count;
    }
};
