class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=-1;

        int i=0;
        int j=height.size()-1;

        while(i<j){
            int mini=min(height[i],height[j]);
            int sum=mini*(j-i);
            maxi=max(maxi,sum);

            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }

        return maxi;
    }
};