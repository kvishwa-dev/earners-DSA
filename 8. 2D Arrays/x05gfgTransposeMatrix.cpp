class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++){
            for (int j = i; j < n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        return mat;
    }
};