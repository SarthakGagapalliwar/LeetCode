class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int count=0;

        for(int i=1; i<n-1; ){

            if(arr[i-1]<arr[i] && arr[i] > arr[i+1]){
                int j=i;
                int len=1;

                while( j>0 && arr[j-1]<arr[j]){
                    len++;
                    j--;
                }
                while(i < n-1 && arr[i]>arr[i+1] ){
                    len++;
                    i++;
                }
              count=max(count,len);
            }
            else{
                i++;
            }
        }

        return count;

    }
};