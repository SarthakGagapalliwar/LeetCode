class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int j=0; j<nums.size();){
            vector<int>arr;
                if(nums[j+1]-nums[j]<=k && nums[j+2]-nums[j]<=k){
                    arr.push_back(nums[j]);
                    arr.push_back(nums[j+1]);
                    arr.push_back(nums[j+2]);
                }
                j=j+3;
                if(arr.empty()){
                    return {};
                }
                ans.push_back(arr);
        }
        return ans;
    }
};