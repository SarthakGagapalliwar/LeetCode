class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int ans=INT_MAX;
        int sum=0;
        int n=nums.size();

        while(j<n){
            sum+=nums[j];

            while(sum >= target){
                int len=j-i+1;
                ans=min(ans,len);
                sum -= nums[i];
                i++;
            }
            j++;

        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};