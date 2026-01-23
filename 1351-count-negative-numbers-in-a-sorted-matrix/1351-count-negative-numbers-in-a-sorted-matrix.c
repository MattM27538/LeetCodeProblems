int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int amountOfNegativeNumbersInGrid = 0;

    for(int i = 0; i < gridSize; ++i){
        for(int j = (*gridColSize - 1); j > -1; --j){
            if(grid[i][j] < 0){
                ++amountOfNegativeNumbersInGrid;
            }
            else{
                break;
            }
        }
    }

    return amountOfNegativeNumbersInGrid;
}