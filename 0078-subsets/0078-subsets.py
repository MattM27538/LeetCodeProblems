class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans= []
        for i in range(0,len(nums)+1):
            for j in list(combinations(nums,i)):
                ans.append(j);

        return ans