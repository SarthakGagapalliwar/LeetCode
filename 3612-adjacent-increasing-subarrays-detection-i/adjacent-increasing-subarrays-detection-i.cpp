class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int prev=0;
        int count=1;
        int maxi=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i]){
                count++;
            }else{
                prev=count;
                count=1;
            }

            if(count/2 >= k){
                return true;
            }
            if(min(count,prev)>=k){
                return true;
            }
        }
        return false;
    }
};