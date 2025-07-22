class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>, greater<int>>minheap;
        int n=nums.size();
        for(int i=0; i<n; i++){
            minheap.push(nums[i]);
        }

        vector<int>ans;
        while(!minheap.empty()){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        return ans;
    }
};