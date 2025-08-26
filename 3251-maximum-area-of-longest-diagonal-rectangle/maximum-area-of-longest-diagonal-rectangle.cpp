class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagSq = 0; 
        int maxArea = 0;

        for (int i = 0; i < dimensions.size(); i++) {
            long long diagSq = 1LL * dimensions[i][0] * dimensions[i][0] +
                               1LL * dimensions[i][1] * dimensions[i][1];
            int area = dimensions[i][0] * dimensions[i][1];

            if (diagSq > maxDiagSq || (diagSq == maxDiagSq && area > maxArea)) {
                maxDiagSq = diagSq;
                maxArea = area;
            }
        }
        return maxArea;
    }
};
