class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::set<int> rowsToChange{};
        std::set<int> columnsToChange{};

        for(size_t i{0}; i < matrix.size(); ++i){
            for(size_t j{0}; j < matrix[i].size(); ++j){
                if(matrix.data()[i][j] == 0){
                    rowsToChange.insert(i);
                    columnsToChange.insert(j);
                }
            }
        }

        for(auto& row:rowsToChange){
            for(auto& element:matrix[row]){
                element=0;
            }
        }

        for(auto& row:matrix){
            for(auto& column:columnsToChange){
                    row[column]=0;
            }
        }
    }
};