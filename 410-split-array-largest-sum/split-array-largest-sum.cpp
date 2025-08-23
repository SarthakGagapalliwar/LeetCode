class Solution {
public:
    bool isValid(vector<int>& arr, int n, int k, int maxPages) {
        int students = 1;
        int pages = 0;
        
        for (auto a : arr) {
            if (a > maxPages) {  
                return false;
            }
            if (pages + a <= maxPages) {
                pages += a;
            } else {
                students++;
                pages = a;
            }
        }
        
        return students <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        int maxi = INT_MIN;

        for (auto a : nums) {
            sum += a;
            maxi = max(maxi, a);
        }

        int s = maxi, e = sum, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isValid(nums, n, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};
