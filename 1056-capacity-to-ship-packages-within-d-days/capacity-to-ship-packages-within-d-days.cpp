class Solution {
public:
    bool isValid(vector<int>& arr, int k, long long maxCap) {
        int days = 1;
        long long load = 0;
        
        for (int a : arr) {
            if (a > maxCap) return false; 
            if (load + a <= maxCap) {
                load += a;
            } else {
                days++;
                load = a;
                if (days > k) return false;
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        long long sum = 0;
        int maxi = 0;

        for (int a : weights) {
            sum += a;
            maxi = max(maxi, a);
        }

        long long s = maxi, e = sum, ans = sum;
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            if (isValid(weights, days, mid)) {
                ans = mid;
                e = mid - 1; 
            } else {
                s = mid + 1;
            }
        }
        return (int)ans;
    }
};
