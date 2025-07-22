class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         unordered_set<int> mp;
        int i = 0, j = 0;
        int sum = 0, maxi = 0;

        while (j < nums.size()) {
            if (mp.find(nums[j]) == mp.end()) {
                sum += nums[j];
                mp.insert(nums[j]);
                maxi = max(maxi, sum);
                j++;
            } else {
                sum -= nums[i];
                mp.erase(nums[i]);
                i++;
            }
        }

        return maxi;

    }
};