class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(begin(nums), end(nums));

        for(int i=0; i < n-2; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int n1 = nums[i];
            int target = -n1;
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(nums[j] + nums[k] == target){
                    while(j < k && nums[j] == nums[j+1])j++;
                    while(j < k && nums[k] == nums[k-1])k--;
                    ans.push_back({n1, nums[j], nums[k]});
                    j++;
                    k--;
                }else if(target < nums[j] + nums[k]){
                    k--;
                }else{
                    j++;
                }
            }

        }
        return ans;
    }
};