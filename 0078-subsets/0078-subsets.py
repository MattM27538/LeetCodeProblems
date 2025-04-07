class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans= [[]]
        for i in range(1,len(nums)+1):
            for j in list(combinations(nums,i)):
                ans.append(j);
        print(ans)
        return ans

        # for i in range(0,len(nums)):
        #     # for j in range(len(nums)-1,0):
        #     # IS it better to clear or reinitialize
        #     subset=[]
        #     for j in range(i,len(nums)):
        #         subset.append(nums[i:j])
        #         ans.append(subset)
        #         subset.clear()