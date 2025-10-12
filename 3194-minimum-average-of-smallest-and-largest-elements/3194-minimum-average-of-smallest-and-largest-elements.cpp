class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        auto forwardIterator {nums.cbegin()};
        auto reverseIterator {nums.cend() - 1};
        double minimumAverage {INT_MAX};
        double numberOfNumerators {2.0};
        
        while(forwardIterator < reverseIterator){
            if(((*forwardIterator + *reverseIterator) / numberOfNumerators) < minimumAverage){
                minimumAverage = (*forwardIterator + *reverseIterator) / numberOfNumerators;
            }

            ++forwardIterator;
            --reverseIterator;
        }
        
        return minimumAverage;
    }
};