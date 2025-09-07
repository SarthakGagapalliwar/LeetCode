class Solution {
public:
    vector<int> sumZero(int n) {
        unordered_set<int>ans;

        int sum=0;

        if(n%2!=0){
            ans.insert(0);
        
        for(int i=1; i<=n/2; i++){
            ans.insert(i);
            ans.insert(-i);
        }
        }else{
            for(int i=1; i<=n/2; i++){
                ans.insert(i);
                ans.insert(-i);
            }
        }

        vector<int>nums;
        for(auto a : ans){
            nums.push_back(a);
        }

        return nums;
    }
};