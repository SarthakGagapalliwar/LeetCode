class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
       int real = 0;
       int zero =0;
       int n = nums.size();
       while(real < n){
        if(nums[real] != 0){
            swap(nums[real],nums[zero]);
            real++;
            zero++;
        }
        else{
            real++;

        }}
        
    }
};