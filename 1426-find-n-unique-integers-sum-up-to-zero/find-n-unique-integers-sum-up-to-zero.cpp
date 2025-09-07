class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        // unordered_set<int>ans;

        int sum=0;

        if(n%2!=0){
            ans.push_back(0);
        
        for(int i=1; i<=n/2; i++){
            ans.push_back(i);
            ans.push_back(-i);
        }
        }else{
            for(int i=1; i<=n/2; i++){
                ans.push_back(i);
                ans.push_back(-i);
            }
        }

        // for(auto a : ans){
        //     nums.push_back(a);
        // }

        return ans;
    }
};