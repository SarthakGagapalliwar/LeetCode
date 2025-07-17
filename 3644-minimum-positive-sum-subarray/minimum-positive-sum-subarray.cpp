class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minPositive = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = i; j < n && j - i + 1 <= r; ++j) {
                sum += nums[j];

                int windowSize = j - i + 1;
                if (windowSize >= l && sum > 0) {
                    minPositive = min(minPositive, sum);
                }
            }
        }

        return (minPositive == INT_MAX) ? -1 : minPositive;
    }
};
