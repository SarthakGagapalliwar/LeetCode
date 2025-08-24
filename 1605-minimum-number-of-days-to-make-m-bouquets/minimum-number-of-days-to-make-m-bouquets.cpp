class Solution {
public:
    bool isValid(vector<int>& arr, int m, int k,int num){
        int count=0;
        int flower=0;
        for(int i=0; i <arr.size(); i++){
            if(arr[i]<=num){
                flower++;
                if(flower==k){
                    count++;
                    flower=0;
                }
            }else{
                flower=0;
            }
             if (count >= m) return true;
        }
     
            return false;
      
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long n=arr.size();
        if(n<1LL*k*m) return -1;

        int s=*min_element(arr.begin(), arr.end());
        int e=*max_element(arr.begin(),arr.end());

    
        int ans=-1;


        while(s<=e){
            int mid=s+(e-s)/2;

            if(isValid(arr,m,k,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }

        }
        return ans;
    }
};