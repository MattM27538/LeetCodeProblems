class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        // Loop through nums. If element does not exist in map insert it with its index(i).
        // If the same element appears again check if it's index j satisfies abs(i-j)<=k.
        for(int i=0;i<nums.size();++i){
            if(map.find(nums[i])==map.end()){
                map.insert({nums[i],i});
            } else {
                if(abs(map.at(nums[i])-i)<=k){return true;}
                //If false update index of nums[i].
                map[nums[i]]=i;
            }
        }
        return false;
    }
};