class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        index=0
        leftSum=0
        rightSum=sum(nums)
        
        #Compare/update sums of values to the left of index and to right of index.
        for num in nums:
            rightSum-=num
            if leftSum==rightSum:
                return index
            leftSum+=num
            index+=1

        return -1