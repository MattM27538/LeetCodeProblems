class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        if len(nums)==1: return nums[0]
        nums.sort()
        return nums[int((len(nums)/2))]