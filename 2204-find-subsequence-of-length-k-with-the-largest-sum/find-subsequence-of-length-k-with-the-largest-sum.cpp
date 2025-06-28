class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>v;
        for(int i=0; i<n; i++){
            v.push_back({nums[i],i});
        }

        sort(v.rbegin(), v.rend());
        vector<int>ind(n,0);
        for(int i=0; i<k; i++){
            ind[v[i][1]]=1;
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