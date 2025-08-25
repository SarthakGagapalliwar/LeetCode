class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>> mp;  
        int m = mat.size();
        int n = mat[0].size();

       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {  
                mp[i + j].push_back(mat[i][j]);
            }
        }

        vector<int> ans;

        for (auto &[key, val] : mp) {
            if (key % 2 == 0) {
                for (int j = val.size() - 1; j >= 0; j--) {
                    ans.push_back(val[j]);
                }
            } else {
                for (int j = 0; j < val.size(); j++) {
                    ans.push_back(val[j]);
                }
            }
        }
        return ans;
    }
};
