class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges; 
        switch(nums.size()){
            case 0: return ranges;
                break;
            case 1: ranges.push_back(to_string(nums[0]));
                break;
            default: {
                int start=0, end=0;
                // Loop through nums vector, check if numbers are sequential,
                // and push ranges when two numbers are not sequential. 
                for(int i=1;i<nums.size();i++){
                    if(nums[i-1]!=nums[i]-1){
                        if(start==end){
                            ranges.push_back(to_string(nums[i-1]));
                        }   else{
                                string range=to_string(nums[start]) + "->" + to_string(nums[end]);
                                ranges.push_back(range);
                            }
                        start=i;
                    }
                    end=i;
                    if(end==nums.size()-1){
                        if(nums[i-1]==nums[i]-1){
                            string range=to_string(nums[start]) + "->" + to_string(nums[end]);
                            ranges.push_back(range);
                        } else{ranges.push_back(to_string(nums[end]));}
                    }
                }
            }
        }
        return ranges;
    }
};