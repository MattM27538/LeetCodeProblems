class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        std::vector<int> sortedArray(nums.size());

        std::sort(nums.begin(), nums.end());

        auto currentindexInSortedArray {0};

        auto forwardIteratorForNums {nums.begin()};

        while(forwardIteratorForNums != nums.end()){
            sortedArray[currentindexInSortedArray] = *(forwardIteratorForNums + 1);
            ++currentindexInSortedArray;
            sortedArray[currentindexInSortedArray] = *(forwardIteratorForNums);

            forwardIteratorForNums += 2;
            ++currentindexInSortedArray;
        }

        return sortedArray;
    }
};