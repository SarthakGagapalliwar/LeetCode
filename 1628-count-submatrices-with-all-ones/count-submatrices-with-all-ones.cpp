class Solution {
public:
    int OneArr(vector<int>&arr){
        int cons=0;
        int res=0;

        for(auto& a : arr){
            if(a==0){
                cons=0;
            }else{
                cons++;
            }
            res+=cons;
        }
        return res;
    }


    int numSubmat(vector<vector<int>>& mat) {
        

        int m = mat.size();
        int n=mat[0].size();
        int res=0;


        for(int startRow=0; startRow<m; startRow++){
                vector<int>vec(n,1);
            for(int endRow=startRow; endRow<m; endRow++){

                    for(int col=0; col<n; col++){
                        vec[col]=vec[col]&mat[endRow][col];
                    }

                res+=OneArr(vec);
            }
        }

        return res;

    }
};