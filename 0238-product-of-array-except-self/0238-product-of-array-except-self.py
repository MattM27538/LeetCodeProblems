class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n
        
        # Compute prefix product
        prefix = 1
        for i in range(n):
            ans[i] = prefix
            prefix *= nums[i]
        
        # Compute suffix product and update result
        suffix = 1
        for i in range(n - 1, -1, -1):
            ans[i] *= suffix
            suffix *= nums[i]
        
        return ans    