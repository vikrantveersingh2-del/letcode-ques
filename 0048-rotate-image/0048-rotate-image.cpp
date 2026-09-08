class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // yaha par phele transpose kiya hamne or transpose mai [i][i] change nhi hota hai and ek cheez or yaad rakhni hai hame ki transpose krte samay j hamesa i+1 se hi chalega 
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};