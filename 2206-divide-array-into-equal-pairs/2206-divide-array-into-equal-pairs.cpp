class Solution {
public:
    bool divideArray(vector<int>& numbers) {
        std::unordered_map<int, int> mapOfNumbersToNumberOccurrences {};
        
        for(auto& number:numbers){
            if(mapOfNumbersToNumberOccurrences.find(number) == mapOfNumbersToNumberOccurrences.end()){
                mapOfNumbersToNumberOccurrences[number] = 1;
            }
            else{
                ++mapOfNumbersToNumberOccurrences[number];
            }
        }

        for(auto& pair:mapOfNumbersToNumberOccurrences){
            // std::cout << pair.first << " " << pair.second << "\n";
            if((pair.second % 2) != 0){ 
                return false;
            }
        }

        return true;
    }
};