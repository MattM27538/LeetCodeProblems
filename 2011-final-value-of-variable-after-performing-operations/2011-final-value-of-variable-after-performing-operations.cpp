class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        auto finalValueAfterOperations {0};

        for(std::string_view operation:operations){
            if(isIncrementOperation(operation)){
                incrementFinalValue(finalValueAfterOperations);
            }
            else{
                decrementFinalValue(finalValueAfterOperations);
            }
        }

        return finalValueAfterOperations;
    }

    bool isIncrementOperation(std:: string_view operation){
        return operation.at(1) == '+';
    }

    void incrementFinalValue(int& finalValueAfterOperations){
        ++finalValueAfterOperations;
    }

    void decrementFinalValue(int& finalValueAfterOperations){
        --finalValueAfterOperations;
    }
};