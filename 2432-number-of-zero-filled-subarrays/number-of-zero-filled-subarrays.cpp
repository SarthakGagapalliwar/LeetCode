class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        long long ans = 0;
        long long j = 1;
        int n = nums.size();
        int i = 0;

        while (i < n) {
            while (i < n && nums[i] == 0) {
                ans += j;
                j++;
                i++;
            }
            j = 1;
            i++;
        }
        return ans;
    }
};