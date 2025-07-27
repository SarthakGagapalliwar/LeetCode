class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;

        vector<int> temp;
        temp.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                temp.push_back(nums[i]);
            }
        }

       
        for (int i = 1; i < temp.size() - 1; i++) {
            if ((temp[i] > temp[i - 1] && temp[i] > temp[i + 1]) || 
                (temp[i] < temp[i - 1] && temp[i] < temp[i + 1])) {
                cnt++;
            }
        }

        return cnt;
    }
};
