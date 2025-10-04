bool numberNotInMap(const int number, const std::unordered_map<int, int>& unorderedMap){
    return unorderedMap.find(number) == unorderedMap.end();
}

void addNumberToMap(const int number, std::unordered_map<int, int>& unorderedMap){
    unorderedMap[number] = 1;
}

void incrementNumberOfOccurrences(const int number, std::unordered_map<int, int>& unorderedMap){
    ++unorderedMap[number];
}

bool eachNumberInMapOccursTwice(const std::unordered_map<int, int>& unorderedMap){
    for(auto& numberAndNumberOccurrencesPair:unorderedMap){
        if((numberAndNumberOccurrencesPair.second % 2) != 0){ 
            return false;
        }
    }

    return true;
}

class Solution {
public:
    bool divideArray(vector<int>& numbers) {
        std::unordered_map<int, int> mapOfNumbersToNumberOfOccurrences {};
        
        for(auto& number:numbers){
            if(numberNotInMap(number, mapOfNumbersToNumberOfOccurrences)){
                addNumberToMap(number, mapOfNumbersToNumberOfOccurrences);
            }
            else{
                incrementNumberOfOccurrences(number, mapOfNumbersToNumberOfOccurrences);
            }
        }

        return eachNumberInMapOccursTwice(mapOfNumbersToNumberOfOccurrences);
    }
};