class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::vector<int> ans{};
        ans.reserve(2);
        std::unordered_map<int,bool> allDigits;

        for(const int &num:nums){
            if(allDigits.find(num)==allDigits.end()){
                allDigits[num]=true;
            }
            else{
                ans.push_back(num);
            }
        }
        return ans;
    }
};