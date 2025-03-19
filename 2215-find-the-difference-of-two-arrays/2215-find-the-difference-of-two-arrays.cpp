class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::vector<std::vector<int>> ans={{},{}};
        std::unordered_map<int,int> mapOfNums1Ints;

        // Hash all ints in nums1 as key=nums1[i] value=1.
        for(int i=0;i<nums1.size();++i){
           mapOfNums1Ints[nums1[i]]=1;
        }

        /* Check if each int in nums2 is in mapOfNums1Values. If int
           is not a valid key append int to vector of distinct ints  
           in nums2 and to the map with value=0 to account for duplicate
           ints in nums2. Else change key's value to 0.
        */
        for(int i=0;i<nums2.size();++i){
            if(mapOfNums1Ints.find(nums2[i])==mapOfNums1Ints.end()){
                ans[1].push_back(nums2[i]);
                mapOfNums1Ints[nums2[i]]=0;
            }
            else{
                mapOfNums1Ints[nums2[i]]=0;
            }
        }

        /* Iterate through map. For each key(int), if value
           is 1 append int to vector of distinct ints in nums1.
        */
        for(const auto &pair:mapOfNums1Ints){
            if(pair.second==1){
                ans[0].push_back(pair.first);
            }
        }
        
        return ans;
    }
};