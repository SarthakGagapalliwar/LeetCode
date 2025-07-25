class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>st;
        int maxi=INT_MIN;
        int sum=0;
        for(auto a :nums){
            if(a<=0){
                maxi=max(maxi,a);
            }else if(!st.count(a)){
                sum+=a;
                st.insert(a);
            }
        }
        if(sum==0)return maxi;
        
        return sum;
    }
};