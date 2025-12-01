int minimum(const int num1, const int num2){
    return num1 <= num2 ? num1 : num2; 
}

int earliestTime(int** tasks, const int tasksSize, const int* const tasksColSize) {
    int timeWhenFirstTaskFinishes = INT_MAX;
    
    for(int i = 0; i < tasksSize; ++i){
        timeWhenFirstTaskFinishes = minimum(timeWhenFirstTaskFinishes, (tasks[i][0] + tasks[i][1]));
    }

    return timeWhenFirstTaskFinishes;
}