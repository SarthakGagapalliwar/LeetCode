class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int sum = 0;
        int mini = INT_MAX;

        while (j < n) { 
            sum += nums[j];

            while (sum >= target) {
                int len = j - i + 1;
                mini = min(mini, len);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return (mini == INT_MAX) ? 0 : mini;
    }
};
