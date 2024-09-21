class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans, subArrEnding=nums[0], nums[0]
        for i in range(1,len(nums)):
            # Loop through possible subarrays as mark which is largest.
            subArrEnding=max(subArrEnding+nums[i],nums[i])
            # Keep track of largest value of subarrays.
            ans=max(subArrEnding,ans)
        return ans
            