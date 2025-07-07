class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        auto nums1Iterator{nums1.begin()};
        auto nums2Iterator{nums2.begin()};

        while((nums1Iterator != nums1.end()) && (nums2Iterator != nums2.end())){
            //Return smallest common value between vectors.
            if(*nums1Iterator == *nums2Iterator){
                return *nums1Iterator;
            } 
            else if (*nums1Iterator < *nums2Iterator) {
                ++nums1Iterator;
            } 
            else {
                ++nums2Iterator;
            }
        }

        return -1;
    }
};