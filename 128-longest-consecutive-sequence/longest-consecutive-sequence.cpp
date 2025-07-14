class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 

        priority_queue<int, vector<int>, greater<>> pq(nums.begin(), nums.end());

        int maxi = 1;
        int count = 1;
        int prev = pq.top();
        pq.pop();

        while (!pq.empty()) {
            int curr = pq.top();
            pq.pop();

            if (curr == prev) {
                continue;
            } else if (prev + 1 == curr) {
                count++;  
            } else {
                count = 1;
            }

            maxi = max(maxi, count);
            prev = curr;
        }

        return maxi;
    }
};
