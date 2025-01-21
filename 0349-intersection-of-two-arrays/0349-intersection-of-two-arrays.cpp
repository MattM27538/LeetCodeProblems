class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,char> numMap;
        set<int> ans;
        // Map all values from nums1.
        for(int i=0; i<nums1.size(); ++i){
            numMap[nums1[i]]='t';
        }
        // Check for same values from nums1 in nums2 and insert them in ans.
        for(int i=0; i<nums2.size(); ++i){
            if(numMap.find(nums2[i])!=numMap.end()){
                ans.insert(nums2[i]);
            };
        }
        return vector<int>(ans.begin(),ans.end());
    }
};