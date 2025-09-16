class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>res;

        for(auto num : nums){

            while(!res.empty()){
                int prev=res.back();
                int curr=num;

                int GCD=gcd(prev,curr);
                if(GCD==1){
                    break;
                }
                int LCM=prev/GCD *curr;
                num=LCM;
                res.pop_back();
            }
            res.push_back(num);
        }
        return res;
    }
};