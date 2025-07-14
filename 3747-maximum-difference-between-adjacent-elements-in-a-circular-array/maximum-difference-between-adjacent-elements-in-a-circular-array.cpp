class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        // int maxi=INT_MIN;
        // int mini=INT_MAX;

        int maxi=abs(nums[0]-nums[nums.size()-1]);

        for(int i=1; i<nums.size(); i++){
            maxi=max(maxi,abs(nums[i]-nums[i-1]));
        }

        return maxi;
        
    }
};