class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int count=1;
        int prev=0;
        int maxlen=0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i]){
                count++;
            }else{
                prev=count;
                count=1;
            }
            maxlen=max(maxlen,count/2);
            maxlen=max(maxlen,min(count,prev));

        }
        return maxlen;
    }
};