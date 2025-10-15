class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;

        vector<int>ans(nums.size());
        int pos=nums.size()-1;

        while(i<=j){
            if(abs(nums[j])>abs(nums[i])){
                ans[pos]=pow(nums[j],2);
                j--;
            }else{
                ans[pos]=pow(nums[i],2);
                i++;
            }
            pos--;
        }
       return ans;
    }
};