class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        priority_queue<int,vector<int>,greater<int>>qp(nums.begin(), nums.end());

        int first=qp.top();
        qp.pop();
        int cnt=1;
        int maxi=1;

        while(!qp.empty()){
            int nNum=qp.top();
            qp.pop();

            if(nNum==first){
                continue;
            }
            else if(nNum==first+1){
                cnt++;
            }else{
                cnt=1;
            }
            maxi=max(maxi,cnt);
            first=nNum;
        }
        return maxi;
    }
};