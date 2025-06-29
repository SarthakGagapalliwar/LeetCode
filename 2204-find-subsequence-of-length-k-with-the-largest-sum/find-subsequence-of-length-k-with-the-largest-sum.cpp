class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<vector<int>>pair;
        int n=nums.size();
        for(int i=0; i<n; i++){
            pair.push_back({nums[i],i});
        }
        sort(pair.rbegin(),pair.rend());
        vector<int>ind(n,0);
        for(int i=0; i<k; i++){
            ind[pair[i][1]]=1;
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(ind[i]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};