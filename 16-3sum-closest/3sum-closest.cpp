class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int close = INT_MAX;  // Minimum difference found so far
        int ans = 0;          // Stores the closest sum result

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one element and use two pointers for the other two
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                // Use long long to prevent potential overflow
                long long sum = (long long)nums[i] + nums[left] + nums[right];

                // Calculate the absolute difference from the target
                int diff = abs((int)(sum - target));

                // If this triplet is closer, update our answer
                if (diff < close) {
                    close = diff;
                    ans = sum;
                }

                // Move pointers based on comparison
                if (sum < target) {
                    left++;   // Try to increase the sum
                } else {
                    right--;  // Try to decrease the sum
                }
            }
        }

        return ans;
    }
};