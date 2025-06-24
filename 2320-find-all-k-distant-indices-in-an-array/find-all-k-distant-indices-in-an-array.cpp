class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                for (int j = 0; j < nums.size(); j++) {
                    if (abs(i - j) <= k) {
                        if (find(ans.begin(), ans.end(), j) == ans.end()) {
                            ans.push_back(j);
                        }
                    }
                }
            }
        }
        return ans;
    }
};