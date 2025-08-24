class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int lastZ=-1;
        int ans=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==0){
                i=lastZ+1;
                lastZ=j;
            }

            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};