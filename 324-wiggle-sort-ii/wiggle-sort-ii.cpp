class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sortNum=nums;
        int n=nums.size();
        sort(sortNum.begin(),sortNum.end());

        int mid=(n+1)/2;

        int j= mid-1;
        // int k=0;
        int k=n-1;

        for(int i=0; i<n; i++){
            if(i%2==0){
                nums[i]=sortNum[j--];
            }else{
                nums[i]=sortNum[k--];
            }
        }
    }
};