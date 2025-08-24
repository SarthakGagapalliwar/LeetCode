class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int i=0;
        int n=nums.size();
        int countZ=0;
        for(int j=0; j<n; j++){
            if(nums[j]==0)countZ++;

            while(countZ>1){
                if(nums[i]==0)countZ--;
                i++;
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};