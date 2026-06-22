class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row;
        vector<int> col;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        int k = 0;
        while (k < row.size()) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (j == col[k] || i == row[k]) {
                        matrix[i][j] = 0;
                    }
                }
            }
            k++;
        }
    }

};