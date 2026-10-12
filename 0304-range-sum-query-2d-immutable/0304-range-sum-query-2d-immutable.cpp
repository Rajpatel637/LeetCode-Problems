class NumMatrix {
    vector<vector<int>> m;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        this -> m = matrix;
        
        for(int i = 0; i < m.size();i++){
            int sum = 0;
            for(int j = 0; j < m[i].size();j++){
                sum += m[i][j];
                m[i][j] = sum;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2;i++){
            if(col1 == 0){
                sum += m[i][col2]; 
            }
            else{
                sum += m[i][col2] - m[i][col1-1];
            }
        }

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */