class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=1e9+7;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<int>power(n,1);
        for(int i=1; i<n; i++){
            power[i]=(power[i-1]*2)%mod;
        }
        int s=0;
        int e=n-1;
        int result=0;

        while(s<=e){
            if(nums[s]+nums[e]<=target){
                result=(result+power[e-s])%mod;
                s++;
            }else{
                e--;
            }
        }
        return result;
    }
};